/* Write a C++ program to categorize a student's performance based
 on their marks:
If marks >= 90: Excellent
If 75 <= marks < 90: Very Good
If 50 <= marks < 75: Good
If 35 <= marks < 50: Needs Improvement
If marks < 35: Fail
If the student's performance is categorized as "Excellent," further 
 check if they have a perfect score (marks == 100). Use nesting */
    
	#include <iostream>
    using namespace std;
    int main(){
	int marks;
	cout<<"Enter Your Mark : ";
	cin>>marks;
	
	if(marks>=90){
		cout<<"Excellent "<<marks;
		
		if(marks==100)
		{
			cout<<" : topper of the school ";
		}

     	}
		else if (marks>=75 || marks>90){
			cout<<"Very good "<<marks;
		}
	    else if(marks>=50||marks>75){
			cout<<"Good "<<marks;
		}
		else if(marks>=35||marks>50){
			cout<<"Need improvment "<<marks;
		}
		else if(marks>35){
			cout<<"Fail "<<marks;
				
        	}
		}
