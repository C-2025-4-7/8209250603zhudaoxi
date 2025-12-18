#include<iomanip>
#include "303FahCel.h"
int main(){
	int c=40,f=120;
	cout<<"Celsius"<<setw(14)<<"Fahrenheit"<<setw(4)<<"|"<<
	setw(13)<<"Fahrenheit"<<setw(14)<<"Celsius"<<endl;
	for(int i=0;i<10;i++){
		cout<<setw(7)<<40-i<<setw(14)<<celsius_to_fah(40-i)<<setw(4)<<"|"<<
		setw(13)<<120-10*i<<setw(14)<<fahrenheit_to_cels(120-10*i)<<endl;
	}
	return 0;
}
