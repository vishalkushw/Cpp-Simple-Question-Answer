//Indiviual number sum 

#include <iostream>
using namespace std;
int main(){
	int num ,sum=0,last,temp;
	cout<<"Enter test number : ";
	cin>>num;
	temp=num;
	
	while(num>0){
		last=num%10;
		sum=sum+last;
		num=num/10;                                 
}
	cout<<sum ;
}


