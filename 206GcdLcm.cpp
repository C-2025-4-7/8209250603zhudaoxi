#include<iostream>
using namespace std;
int gcd(int a, int b) {
	if (!(a % b))
		return b;
	else
		return gcd(b, a % b);
}
int lcm(int a,int b) {
	return a * b / gcd(a, b);
}
int main(){
	cout<<"Please input the first number:"<<endl;
	int fir;
	cin>>fir;
	cout<<"Please input the secend number:"<<endl;
	int sec;
	cin>>sec;
	cout<<"The gcd of them:"<<gcd(fir,sec)<<endl;
	cout<<"The lcm of them:"<<lcm(fir,sec)<<endl;	
}
