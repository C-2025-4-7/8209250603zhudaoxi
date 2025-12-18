#include<iostream>
#include<string>
using namespace std;
int main(){
	string line;
	int englishchars = 0, spaces = 0, numbers = 0, others = 0;
	cout << "please input string:" << endl;
	getline(cin, line);  // ¶ÁÈ¡ÕûÐÐ£¬°üÀ¨¿Õ¸ñ
		for (char c : line) {
			if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
				englishchars++;
			}
			else if (c >= '0' && c <= '9') {
				numbers++;
			}
			else if (c == ' ') {
				spaces++;
			}
			else {
				others++;
			}
		}
	cout << "statistic:" << endl;
	cout << "Englishchars:" << englishchars << endl;
	cout << "Spaces:" << spaces << endl;
	cout << "Number:" << numbers << endl;
	cout << "others:" << others << endl;
	return 0;
}
