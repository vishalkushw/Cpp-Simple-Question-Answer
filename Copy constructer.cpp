#include <iostream>
using namespace std;
class House{
	string	house_name;
	string	address;
	
	public:
	 House(){
	 }	
	 
	  House(const House& other) { 
        house_name = other.house_name;
        address = other.address;
    }
	 void setdata(){
	 	cout<<"Enter house name : ";
	 	cin>>house_name;
	 	cout<<"Enter address : ";
	 	cin>>address;
	 }
	 
	void display(){
		cout<<"House name : "<<house_name<<endl;
		cout<<"Address : "<<address<<endl;
	} 
		
};
	
	int main() {
    House hous1;
    hous1.setdata();
    hous1.display();
    House hous2(hous1);
    hous2.display();
}

