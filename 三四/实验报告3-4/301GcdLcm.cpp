#include<iostream>
using namespace std;
int gcdres(int a,int b){
	if(a<b){
		return gcdres(b,a);
	}
	else{
		if(a%b==0){
			return b;
		}
		else{
			return gcdres(b,a%b);
		}
	}
}
void gcd(int a,int b,int& res){
	res=gcdres(a,b);
}
void lcm(int a,int b,int& res){
	res=a*b/gcdres(a,b);
}
int main(){
	int a,b;
	int g,l;
	cout<<"please input two numbers:"<<endl;
	cin>>a>>b;
	gcd(a,b,g);
	lcm(a,b,l);
	cout<<"the gcd of the two number is:"<<g<<endl;
	cout<<"the lcm of the two number is:"<<l<<endl;
	return 0;
}
