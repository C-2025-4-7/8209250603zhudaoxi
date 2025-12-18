#include<iostream>
#include<cmath>
using namespace std;
bool is_prime(int a){
	int lim=min((int)(sqrt(a)+1),a);
	for(int i=2;i<lim;i++){
		if(a%i==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int cnt=0;
	int pos=2;
	while(cnt<200){
		if(is_prime(pos)){
			cout<<pos<<'\t';
			cnt++;
			if(cnt%10==0){
				cout<<endl;
			}
		}
		pos++;
	}
	return 0;
}
