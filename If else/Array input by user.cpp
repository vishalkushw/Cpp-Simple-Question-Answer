#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter array size : ";
	cin>>n;
	int arr[n];
	
	for(int i=0;i<n;i++){
		cout<<"Enter array index :"<<i<<" ";
		cin>>arr[i];
	}
	cout<<"Array : ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

