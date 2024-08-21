/* Write a C++ program to calculate the water bill based on the
   consumption in units. The water tariff is as follows:

 45 > units: Free
 45 < units <=75 : 475
 75 < units <=125: 750
 125 < units <=200: 1225
 200 < units <=350: 1650
 350 < units: 2000
*/


#include <iostream>
using namespace std;

int main(){
	int unit;
	cout<<"Enter your water consumption : ";
	cin>>unit;
	if(unit>45 && unit<=75){
		cout<<"you have to pay: 475 rs " ;
	}
	 else if (unit>75 && unit<=125){
		cout<<"you have to pay : 750 rs " ;
	}
	 else if (unit>125 && unit<=200){
		cout<<"you have to pay : 1225 rs " ;
	}
	else if (unit>200 && unit<=350){
		cout<<"you have to pay : 1650 rs " ;
	}
	else if(unit>350){
	
		cout<<"you have to pay : 2000";
}
	else {
		cout<<"you have dont pay anything ";
	}
}
