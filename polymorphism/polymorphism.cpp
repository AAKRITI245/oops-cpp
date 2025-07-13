#include<iostream>
using namespace std;

class Parent {
public:
    void aakriti() {
        cout << "Base Function" << endl;
    }
};

class Child : public Parent {
public:
    void aakriti() {
        cout << "Derived Function";
    }
};
 
int main() {
   Parent* p =new Child();
   p->aakriti(); 
}