// copy constracter

#include <iostream>
using namespace std;

class Game{
	public:
		string  category,status;
		int id;
		
		
	Game(string category,string status,int id){
		this-> category=category;
		this-> status=status;
	    this-> id=id;
	    //this pointer is self refrence (object reference)
	}	
	
	Game(Game gm){
		this-> category=gm.category;
		this-> status=gm.status;
	    this-> id=gm.id;
	
	void display(){
		cout<<"object id:"<<id<<endl;
		cout<<"category"<<category<<endl;
		cout<<"status :"<<status;
	}
};

int main(){
	
	Game obj("team mate","killed",101);
	obj.display();
	Game obj1=gm;
	
}
