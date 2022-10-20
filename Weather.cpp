#include "Weather.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;


Weather :: Weather (int)
{
	this->month=month;
}

double Weather :: getTemp()
{
	double a,b;
	double sum=0;
	int counter=0;
	double average;
	
	ifstream mydata;
	
	if (month==1)
	{
	mydata.open("january.dat");	
	}
	else if (month==2)
	{
			mydata.open("february.dat");
	}
	else if (month==3)
	{
		mydata.open("march.dat");
	}
	else if (month==4)
	{
		mydata.open("april.dat");
	}
	else if (month==5)
	{
		mydata.open("may.dat");
	}
else if (month==6)
	{
		mydata.open("june.dat");
	}
		else if (month==7)
	{
		mydata.open("july.dat");
	}
	else if (month==8)
	{
		mydata.open("august.dat");
	}
else if (month==9)
	{
		mydata.open("september.dat");
	}
	else if (month==10)
	{
		mydata.open("october.dat");
	}
	else if (month==11)
	{
		mydata.open("november.dat");
	}
	else if (month==12)
	{
		mydata.open("december.dat");
	}
	else 
	cout<<"Wrong month entered"<<endl;
	
	while(!mydata.eof())
	{
		mydata>>a>>b;
		sum=sum+b;
		counter++;
	}
	
	average=sum/counter;
	
	mydata.close();
	
	if (month==1)
	{
	mydata.open("january.dat");	
	}
	else if (month==2)
	{
			mydata.open("february.dat");
	}
	else if (month==3)
	{
		mydata.open("march.dat");
	}
	else if (month==4)
	{
		mydata.open("april.dat");
	}
	else if (month==5)
	{
		mydata.open("may.dat");
	}
else if (month==6)
	{
		mydata.open("june.dat");
	}
		else if (month==7)
	{
		mydata.open("july.dat");
	}
	else if (month==8)
	{
		mydata.open("august.dat");
	}
else if (month==9)
	{
		mydata.open("september.dat");
	}
	else if (month==10)
	{
		mydata.open("october.dat");
	}
	else if (month==11)
	{
		mydata.open("november.dat");
	}
	else if (month==12)
	{
		mydata.open("december.dat");
	}
	else 
	cout<<"Wrong month entered"<<endl;
	
	while(!mydata.eof())
	{
		mydata>>a>>b;
		if (average+7<b)
		{
			cout<<"It would be hotter than usual on the "<<a<<"th with an anticipated temperature of "<<b<<"c"<<endl;
		}
		else if (average-7>b)
		{
			cout<<"It would be colder than usual on the "<<a<<"th with an anticipated temperature of "<<b<<"c"<<endl;
		}
	}
	

}



