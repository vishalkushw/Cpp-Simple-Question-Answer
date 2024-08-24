//Create a class to print the area of a square and a rectangle.
//The class has two functions with the same name but different
//number of parameters. The function for printing the area of 
//rectangle has two parameters which are its length and breadth
//respectively while the other function for printing the area of
//square has one parameter which is the side of the square.


#include <iostream>
using namespace std;

class Shape {
public:
	
    void printArea(int side) {
        cout<<"Area of square: "<<side * side<< endl;
    }
    void printArea(int length, int breadth) {
        cout<<"Area of rectangle: "<<length * breadth<<endl;
    }
};

int main() {
    Shape sap;
    sap.printArea(5); 
    sap.printArea(4, 6);
}
