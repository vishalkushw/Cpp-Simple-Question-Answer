/*Write a C++ program to categorize an age as:
Age < 13: Child
13 <= Age < 20: Teenager
20 <= Age < 65: Adult
Age >= 65: Senior  */

	#include <iostream>
	using namespace std ;
	int main (){
		
		int age;
		cout<<"Enter your age : ";
		cin>>age;
		
		if (age<13){
			cout<<"Child : "<<age;
		}
		
		else if(age>=13 && age<20){
			cout<<"Teenager : "<<age;
			
		}
		
		else if(age>=20  && age<65){
			cout<<"Adult : "<<age;
		}
		else if(age>=65){
			cout<<"Senior : "<<age;
		}	
	}	
	
