#include <cstring>
class Student{
public:               
	void display();
	Student(int num1,const char name1[],char sex1);
	Student();
	void set_value(int,const char[],char);
private:
	int num;
	char name[20];
	char sex;
};
