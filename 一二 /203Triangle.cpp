#include<iostream>
using namespace std;
int main(){
	double a,b,c;
	bool flag=0;
	cout<<"Please input triangle's three side:"<<endl;
	cin>>a>>b>>c;
	if (a + b > c && a + c > b && b + c > a) {
		flag=1;
		cout<<"It is a triangle"<<endl;
	}
	if(flag){
		cout<<"Triangle's perimeter is:";
		cout<<a + b + c<<endl;
		if (a == b || a == c || b == c) {
			cout<<"It is isosceles"<<endl;
		}
		else{
			cout<<"It isn't isosceles"<<endl;
		}
	}
	else{
		cout<<"It isn't a triangle"<<endl;
	}
}
