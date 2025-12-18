#include<iostream>
using namespace std;
int main(){
	double fir;
	double sec;
	cout << "please input frist number" << endl;
	cin >> fir;
	cout << "please input second number" << endl;
	cin >> sec;
	cout << "please input operator" << endl;
	char op;
	cin >> op;
	switch (op) {
	case '+':
		cout << fir + sec << endl;
		break;
	case '-':
		cout << fir - sec << endl;
		break;
	case '*':
		cout << fir * sec << endl;
		break;
	case '/':
		if (sec == 0) {
			cout << "We can't divide by 0" << endl;
			break;
		}
		cout << fir / sec << endl;
		break;
	case '%':
		if (sec == 0) {
			cout << "We can't divide by 0" << endl;
			break;
		}
		if (fir == int(fir) && sec == int(sec)) {
			cout << int(fir) % int(sec);
			break;
		}
		else { 
			cout << "digital illegal";
			break;
		}
	default:
		cout << "the operator is illegal";
	}

}
