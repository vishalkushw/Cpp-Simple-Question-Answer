/* Write a C++ program to determine the day of the week based on an integer input (1 to 7):
1: Monday
2: Tuesday
3: Wednesday
4: Thursday
5: Friday
6: Saturday
7: Sunday  */
 
	#include<iostream>
	using namespace std;
	int main(){
		int num;
		cout<<"Enter your number 1 to 7 : " ;
		cin>>num;
		switch(num){
			case 1 :cout<<"Monday";
			       break;
			
			case 2:cout<<"Tuesday";
			       break;
			
		 	case 3:cout<<"Wednesday";
			       break;
			
			
			case 4:cout<<"Thursday";
			      break;
			
				case 5:cout<<"Friday";
			           break;
			
			case 6:cout<<"Saturday";
		       	break;
			
			case 7:cout<<"Sunday";
		        	break;
			
			default:
				cout<<"invalid number";
		}
	}
	
