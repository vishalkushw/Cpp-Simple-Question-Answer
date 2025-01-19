
#include <iostream>
using namespace std;

class Employee{
	private :
		string name;
		int employeeID;
		string dep;
		string designation;
		int performance;
		
	public:
		Employee (){
		    cout<<
			cin>>employeeID>>name
			dep
			designation
			performance
		}
		
	void setter(string n,int id ,string dp ,string deg ,int per){
			name=n;
			employeeID=id;
			dep=dp;
			designation=deg;
			performance=per;
		
	} 
	
	void getter(){
		cout<<"Name:"<<name<<endl;
		cout<<"Employee ID : "<<employeeID<<endl;
		cout<<"department:"<<dep<<endl;
		cout<<"Designation:"<<designation<<endl;
		cout<<"Performance"<<performance;
		switch (performance) {
            case 0:
                performance "Bad" << endl;
                break;
            case 1:
                performance  "Average" << endl;
                break;
            case 2:
                performance  "Good" << endl;
                break;
            case 3:
                performance "Very Good" << endl;
                break;
            case 4:
                performance "Best" << endl;
                break;
            
        }
	}
};
int main(){
	Employee emp;
	emp.setter("vishal",2345,"web developer","eng",4);
	emp.getter();
		
}
