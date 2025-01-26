#include <iostream>
using namespace std;

void add(){
	int a=10;
	int b=20;
	cout<<"sum: "<<a+b;
}

void sum(int a,int b){  //formal parameter
	cout<<a+b;
}
int main(){
	add();     //explict calling      
	cout<<"\n";
	add();
	cout<<"\n";
	sum(4,5); //actual parameter    arguments
}
