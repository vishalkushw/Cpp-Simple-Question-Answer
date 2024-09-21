
#include <iostream>
using namespace std;

class Grandparent {
public:
    void print() {
        cout << "Grandparent" << endl;
    }
};

class Parent1 :virtual public Grandparent {

};
class Parent2 :virtual public Grandparent {};

class Child : public Parent1, public Parent2 {};

int main() {
    Child c;
    c.print();
    
}

