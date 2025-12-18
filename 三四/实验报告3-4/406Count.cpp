#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
void count(const char s[], int counts[]){
	for(int i=0;i<strlen(s);i++){
		if((s[i]<='z'&&s[i]>='a')||(s[i]<='Z'&&s[i]>='A')){
			if(s[i]<='z'&&s[i]>='a'){
				counts[s[i]-'a']++;
			}
			else{
				counts[s[i]-'A']++;
			}
		}
	}
}
int main(){
	char str[10000];
	int a[26]={0};
	cout<<"Enter a string: ";
	fgets(str,10000,stdin);
	count(str,a);
	for(int i=0;i<26;i++){
		if(a[i])cout<<char(i+'a')<<": "<<a[i]<<"times"<<endl;
	}
	return 0;
}
