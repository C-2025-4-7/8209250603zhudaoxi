#include<iostream>
using namespace std;
void sort(double list[]){
	bool changed = true;
	double temp;
	do{
		changed = false;
		for (int j=0;j<9;j++)
			if (list[j]>list[j+1]){
				temp=list[j];
				list[j]=list[j+1];
				list[j+1]=temp;
				changed = true;
			}
	} 
	while (changed);
}
int main(){
	double a[10]={0};
	int count=0;
	double temp;
	cout<<"Enter ten numbers:";
	while(count<10&&cin>>temp){
		a[count]=temp;
		count++;
	}
	cout<<"unsorted:";
	for(int i=0;i<10;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	sort(a);
	cout<<"sorted:  ";
	for(int i=0;i<10;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
