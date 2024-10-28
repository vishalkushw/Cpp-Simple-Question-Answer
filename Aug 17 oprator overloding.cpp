#include <iostream>
using namespace std;

class Student {
	void add(){
		cout<<"addition";
	}
	
	public:
		void operator +(Student formal){
			cout<<"+ operator redefine";
			cout<<"+ operator redefine";
		}
};
int main(){
	
	Student obj1,obj2;
//	obj.operator +();
    obj1+obj2;


}
