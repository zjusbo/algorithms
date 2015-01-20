#include <iostream>

using namespace std;
void swap(char * a, char * b);
void selectionSort(char * s, int length);
void _selectionSort(char * s, int start, int end);
int main(){
	char sa[11];
	//Scan original string
	cin>>sa;

	//Call sorting function
	selectionSort(sa,strlen(sa));
	
	//Print sorted string
	cout<<sa<<endl;
	return 0;
}
void selectionSort(char * s, int length){
	for(int i = 0; i < length; i++){
		_selectionSort(s, i, length);
	}
}

void _selectionSort(char * s, int start, int end){
	int least = start;
	
	//Find least char with the index between start and end
	for(int i = start;i < end;i++){
		if (s[least] > s[i]){
			least = i;
		}
	}
	swap(&s[start], &s[least]);
}

//Swap two characters
void swap(char * a, char * b){
	char c;
	c = *a;
	*a = *b;
	*b = c;
}