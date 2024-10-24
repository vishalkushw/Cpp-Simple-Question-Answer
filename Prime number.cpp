#include <iostream>
using namespace std;
int main(){
	int num ;
	cout<<"enter number : ";
	cin>>num;
	
	bool isprime=true;
	
	for(int i=2;i<=num-1;i++){
		if(num%i==0){
			isprime=false;
			break;
		}
	}
	if(isprime==true){
		cout<<"Prime number\n"; //1 2 3 5 7 11
		
	}
	else{
		cout<<"non prime number\n";
	}
}
