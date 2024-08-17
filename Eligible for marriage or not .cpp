//02  Write a program to take input age of male or Female and check he/she is eligible for marriage or not.ask age and gender.

#include <iostream >
using namespace std;
int main(){
	int age ;
	char  gender; 
	
	cout<<"Enter your age : ";
	cin>>age;
	cout<<"Enter your gender male for 'm' and female for 'f' : ";
	cin>>gender;
	
	if(age>=21 && gender=='m'|| age>=18 && gender=='f'){
		cout<<" you are eligible for marriage : " <<age<<" " <<gender;
	}
	
	else{
		cout<<"you are not eligible for marriage  you are only : " <<age; 
	}
	
}

