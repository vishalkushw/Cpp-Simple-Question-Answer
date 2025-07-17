/*Write a C++ program to determine if a student is eligible
 for admission based on their score:
Score >= 85: Eligible for Science
70 <= Score < 85: Eligible for Commerce
50 <= Score < 70: Eligible for Arts
Score < 50: Not eligible for admission */

	#include <iostream>	
	using namespace std;
	int main(){
		int score;
		cout<<"Enter Your Score : ";
		cin>>score;
		
		if(score>=85){
			cout<<"Eligible for science";
			
		}
		
		else if(score>=70 && score<85){
			cout<<"eligible for commerce " ;
		}
		else if(score>=50 && score<70){
			cout<<"Eligible for Arts:";
		}
		else if(score<50){
			cout<<"Not eligible for admission : ";
		}

	}
		
