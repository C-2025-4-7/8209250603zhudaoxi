#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include"student.h"  
#include<cstdio>
using namespace std;
void Student::display()
{
	cout<<"num£º"<<num<<endl;
    cout<<"name£º"<<name<<endl;
    cout<<"sex£º"<<sex<<endl;
}
void Student::set_value(int num1, const char name1[], char sex1) {
	num = num1;
	strcpy(name, name1);
	sex = sex1;
}
Student::Student(int num1,const char name1[],char sex1):num(num1),sex(sex1){
		strcpy(name,name1);
	}
Student::Student() :num(0), sex('\0') {
	name[0] = '\0';
}
