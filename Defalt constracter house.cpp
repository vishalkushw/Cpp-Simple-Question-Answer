#include <iostream>
using namespace std;
class House{
	string	house_name;
	string	address;
	
	public:
	 House(){
	 }	
	 void setdata(){
	 	cout<<"enter house name : ";
	 	cin>>house_name;
	 	cout<<" enter address : ";
	 	cin>>address;
	 }
	 
	 
	void display(){
		cout<<"House name : "<<house_name<<endl;
		cout<<"address : "<<address;
	} 
		
};


int main(){
	House hous;
	hous.setdata();
	hous.display();
}
