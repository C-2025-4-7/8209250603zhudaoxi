#include<iostream>
using namespace std;
int main(){
	int a[10];
	int cnt=0;
	bool flag=0;
	cout<<"Enter ten numbers:";
	int temp;
	int count=0;
	while(count<10&&cin>>temp){
		count++;
		flag=0;
		for(int i=0;i<cnt;i++){
			if(temp==a[i]){
				flag=1;
				break;
			}
		}
		if(flag){
			continue;
		}
		a[cnt]=temp;
		cnt++;
	}
	cout<<"The distinct numbers are:";
	for(int i=0;i<cnt;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
