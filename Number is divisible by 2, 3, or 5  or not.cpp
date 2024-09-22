/* Write a C++ program to check if a number is divisible by 2, 3, or 5 
and print the appropriate message:
Divisible by 2: "The number is divisible by 2."
Divisible by 3: "The number is divisible by 3."
Divisible by 5: "The number is divisible by 5."
Not divisible by 2, 3, or 5: "The number is not divisible by 2, 3, or 5."*/
   
	#include <iostream>
	using namespace std ;
	int main(){
		int num ;
		cout<<"Enter your number : ";
		cin >>num;
		
		if(num%2==0 && num%3==0 && num%5==0){
			cout<<"number is divisible by 2 "<<endl;
			cout<<"number is divisible by 3 "<<endl;
			cout<<"number is divisible by 5 ";
			
		}
		else{
			cout<<"number is not divisible by 2,3 or 5  ";
		}
	}
