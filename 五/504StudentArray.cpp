#include<iostream>
using namespace std;
class Student{
	public:
		long long id;
		int score;
		Student():id(0),score(0){};
		Student(int i,long long j):id(j),score(i){}
};
long long max(Student num[],int len){
	int m=0;
	long long res=0;
	for(int i=0;i<len;i++){
		if((num[i]).score>m){
			m=(num[i]).score;
			res=(num[i]).id;
		}
	}
	return 	res;
}
int main(){
	Student temp[5]={Student(59,1),Student(98,2),Student(75,3),Student(87,4),Student(69,5)};
	cout<<"the student who has the max score is:"<<max(temp,5)<<endl;
	return 0;
}
