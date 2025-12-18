#include<iostream>
#include<string>
using namespace std;
int main(){
	string temp = "";
	for (int i = 0; i < 5; i++) {
		temp += '*';
		cout << temp << endl;
	}
}
