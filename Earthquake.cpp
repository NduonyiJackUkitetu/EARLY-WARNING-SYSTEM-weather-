#include "Earthquake.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;

Earthquake :: Earthquake()
{
	eqchance=0;
}

int Earthquake :: geteq()
{	
int eqchance;
	fstream file;
	file.open("earthquake.dat");
srand(time(0));
for(int i = 0; i < 1; i ++)
file<<1+ rand()%50<<"\n";

	file.close();
	file.open("earthquake.dat");
	
file>>eqchance;
	if(eqchance == 49){
		cout<<"Seismic Activity NOT Normal please proceed with caution and stay inside!"<<endl;
	}
	else{
		cout<<"Seismic Activity Normal"<<endl;
	}

	file.close();
return 0;
}
