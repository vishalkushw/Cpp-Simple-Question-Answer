//  Take positive integer input and tell if it  is a three digit
//  number or not

#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter number : ";
	cin>>n;
	
	if(n>99 && n<1000){
		cout<<"three digit number";
	}
	else {
		cout<<"Not a three digit number";
	}
}
