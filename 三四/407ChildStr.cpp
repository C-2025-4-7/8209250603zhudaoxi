#include<iostream>
#include<string>
using namespace std;
int indexOf(const char* s1, const char* s2){
	int size1=-1;
	bool flag=1;
	for(int i=0;s1[i]!='\0';i++){
		size1++;
	}
	int size2=-1;
	for(int i=0;s2[i]!='\0';i++){
		size2++;
	}
	for(int i=0;i<=size2-size1;i++){
		flag=1;
		for(int j=0;j<size1;j++){
			if(s1[j]!=s2[i+j]){
				flag=0;
				break;
			}
		}
		if(flag){
			return i;
		}
	}
	return -1;
}
void read(const char* s1){
	for(int i=0;(s1[i]!='\n')&&(s1[i]!='\0');i++){
		cout<<s1[i];
	}
}
int main(){
	cout<<"Enter the first string:";
	char s1[100];
	fgets(s1,100,stdin);
	cout<<"Enter the socend string:";
	char s2[100];
	fgets(s2,100,stdin);
	cout<<"indexOf(¡°";
	read(s1);
	cout<<"¡±, ¡°";
	read(s2);
	cout<<"¡±) is "<<indexOf(s1,s2);
	return 0;
}
