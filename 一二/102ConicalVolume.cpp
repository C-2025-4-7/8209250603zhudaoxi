#include<iostream>
#define PI 3.14
using namespace std;
int main(){
	double radius;
	double height;
	cout << "input radius:" << endl;
	cin >> radius;
	cout << "input height:" << endl;
	cin >> height;
	cout << "the S is:\n";
	cout << radius * radius * PI * height * (1.0 / 3) << endl;
	return 0;
}
