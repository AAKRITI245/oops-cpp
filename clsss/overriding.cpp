#include<iostream>
using namespace std;
class parent {
    public:
    virtual void display() {
        cout << "Parent class display function" << endl;    
        
    }
};
class child : public parent {
    public:
    void display() override {
        cout << "Child class display function" << endl;
    }
};
int main() {
    parent* p = new child();
p->display(); 
}
