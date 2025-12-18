#include<cstring>
#include<iostream>
#include<stdio.h>
using namespace std;
int parseHex(const char *const hexString){
	int len=strlen(hexString);
	int res=0;
	for(int i=0;i<len-1;i++){
		res*=16;
		if('A'<=hexString[i]&&hexString[i]<='F'){
			res+=((int)(hexString[i]-'A')+10);
		}
		else{
			res+=(int)(hexString[i]-'0');
		}
	}
	return res;
}
int main(){
	char num[10000];
	cout<<"please input your number(hex):";
	fgets(num,10000,stdin);
	cout<<"the number in oct is:"<<parseHex(num);
	return 0;
}
