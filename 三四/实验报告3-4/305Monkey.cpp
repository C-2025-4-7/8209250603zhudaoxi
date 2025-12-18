#include<iostream>
using namespace std;
int Num(int val,int day){
	if(day!=1){
		return Num(val*2+2,day-1);
	}
	else{
		return val;
	}
}
int main(){
	int day=10;
	cout<<"the number of peaches is:"<<Num(1,day);
	return 0;
}
