#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	double Fahrenheit;
	cout<<"Please input Fahrenheit degree:"<<endl;
	cin >> Fahrenheit;
	cout<<"Centigrade degree is:"<<endl;
	cout<<fixed<<setprecision(2)<<(Fahrenheit - 32) / 1.8;
	return 0;
}
