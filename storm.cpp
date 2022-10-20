#include "Storm.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;

Storm :: Storm(){
	stormchance = 0;
}
int Storm :: getstorm()
{
	int stormchance;
	fstream infile;
	infile.open("storm.dat");
	
	srand(time(0));
	for(int i = 0; i < 1; i++)
		infile<<1+rand()%40<<endl;
		
	infile.close();
	infile.open("storm.dat");
	
	infile>>stormchance;
		if(stormchance == 22)
			cout<<"High chance of Hurricane! Please stay safe."<<endl;
		else 
			cout<<"Low chance of Hurricane"<<endl;
			
		infile.close();
	return 0;	
	
}

