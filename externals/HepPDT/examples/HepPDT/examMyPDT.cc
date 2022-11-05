// ----------------------------------------------------------------------
// examMyPDT.cc
//
//////////////////////////////////////////////////////////////////////////
/// \author Lynn Garren
///
/// create a custom PDT using our own definitions and write out the resulting PDT
///

#include "HepPDT/defs.h"
#include <fstream>

#include <cstdlib>
#include <string>

#include "HepPDT/TableBuilder.hh"
#include "HepPDT/ParticleDataTable.hh"
#include "HepPDT/TempParticleData.hh"

void addData( HepPDT::TableBuilder& tb, std::string const & name, int const id,
               double const mass,  double const charge, double const width,
	       double const tspin );

int main()
{
    const char outfile[] = "examMyPDT.out";
    // construct empty PDT
    HepPDT::ParticleDataTable datacol;
    {
        // Construct table builder
        HepPDT::TableBuilder  tb(datacol);
	// create my own particles here
        addData( tb,    "p+", 2212,  0.938,  +1.0,   -1,  .5 );
        addData( tb,     "d",    1,     0., -2./3,   -1,  .5 );
        addData( tb,    "u~",   -2,     0., -1./3,   -1,  .5 );
        addData( tb,    "W-",  -24, 80.396,  -1.0, 2.06, 1.0 );
        addData( tb, "gamma",   22,      0.,   0.,   -1, 1.0 );
        addData( tb, "badgamma",   122,      0.,   0.,   -1, 1.0 );
	tb.removeParticle( 122 );
    }	// the tb destructor fills datacol
    std::ofstream wpdfile( outfile );
    if( !wpdfile ) { 
      std::cerr << "cannot open " << outfile << std::endl;
      exit(-1);
    }
    datacol.writeParticleData(wpdfile);
    // access a particle
    // you get a null pointer if you reqest an undefined particle
    HepPDT::ParticleData * pd = datacol.particle( HepPDT::ParticleID(22) );
    if( pd )  {
        std::cout << "particle " << pd->name() << " is defined" << std::endl;
    } else { 
        std::cout << "ERROR: particle is not in particle data table" << std::endl;
    }
    pd = datacol[ HepPDT::ParticleID(-24) ];
    // we expect this next line to produce an error
    std::cout << "the error is expected" << std::endl;
    if( datacol[ HepPDT::ParticleID(111) ] )  {
        std::cout << "particle " << datacol[ HepPDT::ParticleID(111) ]->name() << " is defined" << std::endl;
    } else { 
        std::cout << "ERROR: particle " << HepPDT::ParticleID(111).pid()
	          << " is not in particle data table" << std::endl;
    }
    
    return 0;
}

void addData( HepPDT::TableBuilder& tb, std::string const & name, int const id,
               double const mass,  double const charge, double const width,
	       double const tspin )
{
    HepPDT::TempParticleData& tpd = tb.getParticleData( HepPDT::ParticleID( id ) );
    tpd.tempParticleName = name;
    tpd.tempCharge = charge;
    tpd.tempMass = HepPDT::Measurement( mass, 0. );
    tpd.tempSpin = HepPDT::SpinState( tspin, 0., 0. );
    tpd.tempWidth = HepPDT::Measurement( width, 0. );
    tb.addParticle( tpd );
}
