#include <iostream>
#include <iomanip>
#include "Weather.h"
#include "Earthquake.h"
#include "Storm.h"
using namespace std;

int main(int argc, char** argv) {
	int month,prompt,retry;
	cout<<setw(70);
	cout<<"Welcome to OPERATION SAFE"<<endl;
	cout<<endl;
	cout<<"This application is an Early Warning System that sends notification to the user if there are any signs of irregularities in the weather, seismic activities and/or any natural disasters. "<<endl;
	cout<<endl;
	cout<<"This app is made by Andrei Vivar, Raiden Yamaoka and Jack Ukitetu."<<endl;
	cout<<endl;
	
	for(;;){
		cout<<"Enter '0' to start."<<endl;
		cin>>prompt;
		
		if(prompt == 0){
			cout<<"Enter month (e.g March = 03) = ";
			cin>>month;
		
			Weather w1 (month);
			w1.month=month;
			Earthquake e1;
			Storm s1;
	
			cout<<w1.getTemp()<<endl;
			cout<<e1.geteq()<<endl;
			cout<<s1.getstorm()<<endl;
			
			cout<<"Enter '1' to quit the app. Enter '0' to continue searching. "<<endl;
			cin>>retry;
			if(retry == 1){
				cout<<"Thanks for using the app! Be Safe!"<<endl;
				break;				
			}
			else
				continue;
		}
		else {
			cout<<"Incorrect input, please try again."<<endl;
		}
	}
	return 0;
}
