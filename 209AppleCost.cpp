#include<iostream>
using namespace std;
int main(){
	int num = 2;
	int sum = 0;
	int day = 0;
	double unitPrice = 0.8;
	while (num < 100) {
		sum += num;
		num *= 2;
		day++;
	}
	cout<<sum * 0.8/day;
	return 0;
}
