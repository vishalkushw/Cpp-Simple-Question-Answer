#include <iostream>
using namespace std;

class Student {
	private:
		int marks;
    
	public:
	Student(int m){
		marks=m;
	}		
	
	
      void display(){
	  cout<<marks;
	  }

	
		Student operator +(Student obj){
			Student temp(0);
			temp.marks=obj.marks;
			return temp;
		}
		
};
int main(){
	
	Student s1(23),s2(34),s3(45);

    Student result=s1+s2+s3;
    
    result.display();
}
