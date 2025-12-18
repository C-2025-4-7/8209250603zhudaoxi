#include<iostream>
using namespace std;
int main(){
	bool a[101]={0};
	for(int i=1;i<=100;i++){
		for(int j=i;j<=100;j+=i){
			a[j]=1-a[j];
		}
	}
	for(int i=1;i<=100;i++){
		if(a[i]){
			cout<<i<<'\t';
		}
	}
	return 0;
}
