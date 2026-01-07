#include<iostream>
using namespace std;
class Point{
	private:
		double x;
		double y;
	public:
		Point(double i,double j):x(i),y(j){}
		void display(){
			cout<<"the x-coordinate is:"<<x<<endl;
			cout<<"the y-coordinate is:"<<y<<endl;
		}
		void setPoint(int i, int j){
			x+=i;
			y+=j;
		}
};
int main(){
	Point res(60,80);
	res.setPoint(10,20);
	res.display();
	return 0;
}
