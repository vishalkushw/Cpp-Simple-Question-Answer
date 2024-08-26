//display reverse order array.

#include <iostream>
using namespace std ;
int main(){
	int n;
	cout<<"Enter your range : ";
	cin>>n;
	int array[n];
	
	for(int i=0;i<n;i++){
		cout<<"Enter your number of index "<<i <<" : ";
		cin>>array[i];
	}
	cout<<endl;
	for(int i=n-1;i>=0;i--){
		cout<<"your number of index "<<i<<" is : "<<array[i]<<endl;
	}
}

