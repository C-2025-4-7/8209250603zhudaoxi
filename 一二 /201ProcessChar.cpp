#include<iostream>
using namespace std;
int main(){
	char input;
	cout<<"Please input a char:"<<endl;
	cin >> input;
	int value = input;
	if ('a' <= value && value <= 'z') {
		value = value - 'a' + 'A';
		cout << char(value) << endl;
	}
	else {
		cout << value << endl;
	}
	return 0;
}
