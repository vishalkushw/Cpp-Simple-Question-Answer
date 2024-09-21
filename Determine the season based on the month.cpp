 /* Write a C++ program to determine the season based on the 
 month number (1 to 12):
12, 1, 2: Winter
3, 4, 5: Spring
6, 7, 8: Summer
9, 10, 11: Autumn   */

	#include <iostream>
	using namespace std;
	int main(){
		
		int num;
		cout <<"Enter your number 1 to 12 : ";
		cin >>num;
		
		if (num==12 || num==1 ||num==2){
			cout<<"Winter";
			
		}
		 else if (num==3 || num==4 ||num==5){
			cout<<"Spring";
			
		}
		 else if (num==6 || num==7 ||num==8){
			cout<<"Summer";
			
		}
		else if (num==9 || num==10 ||num==11){
			cout<<"Autumn";
			
		}
		
		else{
			cout<<" Invalid number ";
		}		
	}
