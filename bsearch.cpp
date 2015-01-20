#include <iostream>

int bsearch(int *data,int length, int i);
int _bsearch(int *data, int start, int end, int i);
using namespace std;
int main(){
	int data[] = {1,6,8,9,11,13,14,16};
	int length = 8;
	int i;
	int index = -1;
	cout<<"Please input a number:";
	//Scan input number
	cin>>i;

	//Call binary search function
	index = bsearch(data, length, i);

	if (index == -1){//Not found
		cout<<i<<" is not found in the array"<<endl;
	}
	else{//Found
		cout<<i<<" is found in the array index "<<index<<endl;
	}
	return 0;
}

int bsearch(int *data,int length, int i){
	return _bsearch(data, 0, length, i);
}

int _bsearch(int *data, int start, int end, int i){
	if (start >= end)
		return -1; //Not found
	int mid = (start + end) / 2;
	if (data[mid] == i)
		return mid; //Found
	else if(data[mid] < i){
		return _bsearch(data, mid + 1, end, i);
	}
	else{
		return _bsearch(data, start, mid, i);
	}
}