#include<iostream>
using namespace std;
int main(){
	double x;
	cout<<"Please input x's value:";
	cin>>x;
	if (0 < x && x < 1) {
		cout<< 3 - 2 * x;
	}
	if (x >= 1 && x < 5) {
		cout<< 1 / (2 * x) + 1;
	}
	if (x >= 5 && x < 10) {
		cout<< x * x;
	}
	return 0;
}
