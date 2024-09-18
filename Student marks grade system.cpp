/*Write a C++ program to determine the grade based on marks 
using the following criteria:

Marks >= 90: Grade A
80 <= Marks < 90: Grade B
70 <= Marks < 80: Grade C
60 <= Marks < 70: Grade D
Marks < 60: Grade F  */

#include <iostream>
using namespace std;
int main(){
	int marks;
	cout<<"Enter your mark : ";
	cin>>marks;
	
    	if(marks>=90){
	    	cout<<"Grade A "<<marks;
	    }
		else if (marks>=80 || marks>90){
			cout<<"Grade B "<<marks;
		}
		else if(marks>=70||marks>80){
			cout<<"Grade C "<<marks;
		}
		else if(marks>=60||marks>70){
			cout<<"Grade D "<<marks;
		}
		else if(marks<60){
			cout<<"Grade F "<<marks;
				
        	}
		}
