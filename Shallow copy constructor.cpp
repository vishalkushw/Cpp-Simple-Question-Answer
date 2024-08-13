#include <iostream>
using namespace std;

class School {
private:
    int *roll;
    string school_name;
    string address;
public:
    School(int r, string sch, string add) {
        school_name = sch;
        address = add;
        roll = new int;
        *roll = r;
    }

        //shallow copy constructor	
	    School(const School &s1){
        school_name=s1.school_name;
        address = s1.address;
	    roll= s1.roll;
	 }

    void change_roll(int d) {
        *roll = d;
    }

    void display() {
        cout << "Roll number: " << *roll << endl;
        cout << "School: " << school_name << endl;
        cout << "Address: " << address << endl;
        cout << endl;
    }
};

int main() {
    School s1(101, "kvs", "Bhopal");
    s1.display();

    School s2(s1);
    s2.display();

    s2.change_roll(102);
    s1.display();
    s2.display();
}
