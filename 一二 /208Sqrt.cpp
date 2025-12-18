#include<iostream>
#include<string>
using namespace std;
int main(){
	double input, print;
	cout << "What number do you want sqrt:"<<endl;
	cin >> input;
	bool flag = 0;//to mark the negative number(1 is negative)
	if (input < 0) {
		flag = 1;
		input = -input;
	}
	double pre = input;
	double p = 0.5 * (input + 1);
	while (pre - p > 0.00001 || p - pre > 0.00001) {
		pre = p;
		p = 0.5 * (p + input / p);
	}
	if(flag)
	cout << to_string(p)+"i";
	else {
		cout << p;
	}
}
