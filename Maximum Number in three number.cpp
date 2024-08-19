// Write a C++ program to find maximum between three numbers

#include <iostream>
using namespace std;
int main(){
	int num1 , num2, num3;
	cout<<"Enter first number :  ";
	cin>>num1;
	cout<<"Enter Second  number :  ";
	cin>>num2;
	cout<<"Enter third number :  ";
	cin>>num3;
	
	
	if(num1>num2 && num1>num3){
		cout<<"num1 is maximum : " <<num1;
	}
	
	else if(num2>num1 && num2>num3){
		cout<<" num2 is maximum : "<<num2 ;
	}
	else {
		cout<<"num3 is maximum : "<<num3;
	}
}

