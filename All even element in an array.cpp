// 04 WAP to count all even element in an array, and display result.

#include <iostream>
using namespace std ;
int main(){
	int n ,count=0;
	cout<<"Enter your range : ";
	cin>>n;
	int array[n];
	
	for(int i=0;i<n;i++){
		cout<<"Enter your number of index "<<i <<" : ";
		cin>>array[i];
	}
	
	for(int i=0;i<n;i++){
	    cout<<"your number of index "<<i<<" is : "<<array[i]<<endl;
	    if(array[i] % 2 ==0){
		
		count++;
	 }
	}
	cout<<"even number count is :"<<count;
}
