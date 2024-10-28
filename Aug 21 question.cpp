//write a program to create a class name Time in which two data members
// hour and minit and having the folleing mehtod
// convert_into_minit()
// add_two_time_object()


#include <iostream>
using namespace std;

class Time {
	private:
	int	hour;
	int	minit;
	
	public:
	   Time(int h,int m){
		hour=h;
		minit=m;
	}
     
   void display() {
        cout << hour << " hours and " << minit << " minutes" << endl;
    }
	
	
    void convert_into_minute() { 
        cout << hour * 60 + minit << " minutes" << endl;
    }
	
	Time operator+(Time object){
		Time temp(0,0);
		int extra_hour=(minit+object.minit)/60;
		int remain_minit=(minit+object.minit)%60;
		temp.hour=hour+object.hour+extra_hour;
		temp.minit=remain_minit;
		return temp;
			
	}
};
int main(){
	Time obj1(2,30),obj2(2,40);
	obj1.display(); 
    obj2.display(); 

    Time sum = obj1 + obj2;
    cout << "Sum: ";
    sum.display(); 

}
