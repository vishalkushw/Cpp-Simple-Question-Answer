  /*  Write a C++ program to calculate the electricity bill 
  based on the following rates:
Units <= 100: Rate per unit = Rs 1
100 < Units <= 200: Rate per unit = Rs 1.5
Units > 200: Rate per unit = Rs 2    */ 
		
		#include <iostream>
		using namespace std;
		int main(){
			int units;
			cout<<"Enter Your Unit : " ;
			cin>>units;
			
			if(units<=100){
				cout<<"rate per units rs 1";
				
			}
			else if(units>00 && units<=200){
			
				cout<<"rate per units rs 1.5 ";
				
			}
			else if(units>200){
			
				cout<<"rate per unit rs 2 :";
			}
		}
		
