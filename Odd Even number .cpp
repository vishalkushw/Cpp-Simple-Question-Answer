// if n divide by two print even number and
// n not divide by two print odd number  from range 2 to 40 

#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter number : ";
	cin>>n;
	
   	if(n%2==0){
	    for(int i=2;i<=40;i+=2){
		 cout<<i<<" "; 
        }
    }
    else if(n%2!=0) {
        for(int i=1;i<40; i+=2){
	     cout<<i<<" ";
	    }
	}
	       
	else{
	    cout<<"no match";
		}
}

