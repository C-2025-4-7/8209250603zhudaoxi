#include<iostream>
using namespace std;
class Rectangle{
	private:
		double height;
		double width;
		double length;
	public:
		Rectangle(){
			cout<<"please input the height of the rectangle:";
			cin>>height;
			cout<<"please input the width of the rectangle:";
			cin>>width;
			cout<<"please input the length of the rectangle:";
			cin>>length;
		}
		double Volume(){
			return length*width*height;
		}
};
int main(){
	Rectangle r1;
	Rectangle r2;
	Rectangle r3;
	cout<<"the volume of rectangle one is:"<<r1.Volume()<<endl;
	cout<<"the volume of rectangle two is:"<<r2.Volume()<<endl;
	cout<<"the volume of rectangle three is:"<<r3.Volume();
	return 0;
}
