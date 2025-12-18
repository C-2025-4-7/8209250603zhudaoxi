#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]);
void mergeSort(int num[], int left, int right, int temp[]) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(num, left, mid, temp);
        mergeSort(num, mid + 1, right, temp);
        merge(num + left, mid - left + 1, num + mid + 1, right - mid, temp + left);
        for (int i = left; i <= right; i++) {
            num[i] = temp[i];
        }
    }
}
void sort(int num[], int len, int res[]) {
    int* temp = new int[len];
    mergeSort(num, 0, len - 1, temp);
    for (int i = 0; i < len; i++) {
        res[i] = num[i];
    }
    delete[] temp;
}
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
    int i = 0, j = 0, k = 0;
    while (i < size1 && j < size2) {
        if (list1[i] <= list2[j]) {
            list3[k++] = list1[i++];
        } else {
            list3[k++] = list2[j++];
        }
    }
    while (i < size1) {
        list3[k++] = list1[i++];
    }
    while (j < size2) {
        list3[k++] = list2[j++];
    }
}
int main(){
	cout<<"please input the length of the array:";
	int n;
	cin>>n;
	int *t=new int[n];
	int *res=new int[n];
	cout<<"please input the number:";
	for(int i=0;i<n;i++){
		cin>>*(t+i);
	}
	sort(t,n,res);
	cout<<"sorted:";
	for(int i=0;i<n;i++){
		cout<<" "<<*(res+i);
	}
	delete[] t;
	delete[] res;
	return 0;
}
