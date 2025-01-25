//Base power using recursion
#include <iostream>
using namespace std;
int pow(int b,int p){
	
	if(b==0){
		return 0;
	}
	
	if(p==0){
		return 1;
	}
	int ans =b*pow(b,p-1);
	return ans;
}

int main(){   
int b,p;
cout<<"Enter Base value:";
cin>>b;  
cout<<"Enter power value: ";
cin>>p;
int ans=pow(b,p);                    
cout<<"Result is : "<<ans;
}	
