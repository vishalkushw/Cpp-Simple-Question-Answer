// reverse string 
#include <iostream>
using namespace std;
int main(){
	string f1= "pineapple",reverse="";
	int size= f1.size();
	for(int i=size-1;i>=0;i--){
		reverse=reverse+f1[i];
		
	}
	cout<<reverse;	
}
  
