#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]){
	const int *p=list1;
	const int *q=list2;
	int *u=list3;
	int i=0,j=0,k=0;
	while(i<size1||j<size2){
		while(i<size1&&j<size2){
			if(*(p+i)>*(q+j)){
				*(u+k)=*(q+j);
				j++;
			}
			else{
				*(u+k)=*(p+i);
				i++;
			}
			k++;
		}
		while(i<size1){
			*(u+k)=*(p+i);
			i++;
			k++;
		}
		while(j<size2){
			*(u+k)=*(q+j);
			j++;
			k++;
		}
	}
	cout<<"The merged list is ";
	for(int i=0;i<size1+size2;i++){
		cout<<*(u+i)<<" ";
	}
}
int main(){
	int size1,size2;
	cout<<"Enter list1: ";
	cin>>size1;
	int *p=new int[size1];
	for(int i=0;i<size1;i++){
		cin>>*(p+i);
	}
	cout<<"Enter list2: ";
	cin>>size2;
	int *q=new int[size2];
	for(int i=0;i<size2;i++){
		cin>>*(q+i);
	}
	int *u=new int[size1+size2];
	merge(p,size1,q,size2,u);
	delete[] u;
	delete[] p;
	delete[] q;
	return 0;
}
