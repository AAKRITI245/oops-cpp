#include<iostream>
using namespace std;

class Parent {
    protected:
    int protectedVar;
    public: 
    int publicVar;
        private:
    int privateVar;
    };
class Child : protected Parent {
    public:
    void setProtectedVar(int value) {
        protectedVar = value; // Accessing protected member
    }
    
    void setPublicVar(int value) {
        publicVar = value;
        }
    
    
    
    void display() {
        cout << "Protected Variable: " << protectedVar << endl;
        cout << "Public Variable: " << publicVar << endl;
        // cout << "Private Variable: " << privateVar << endl; // Not accessible
    }
};
class Child2 : protected Child {
    public:
    void showChild() {
        cout << "Protected Variable from Child: " << protectedVar << endl;
        cout << "Public Variable from Child: " << publicVar << endl;
       
    }
};
class Child3 : public Child2 {
    public:
    void showChild() {
        cout << "Protected Variable from Child: " << protectedVar << endl;
        cout << "Public Variable from Child: " << publicVar << endl;
        // cout << "Private Variable from Child: " << privateVar << endl; // Not accessible
    }
    // Inherits from Child2, can access protected and public members
};
int main() {
    
    Child c;
    Child2 c2;
    c.setProtectedVar(10);
    c.setPublicVar(20);
    
    c.display();
    c2.showChild();
    
    // cout << "Private Variable: " << childObj.privateVar << endl; // Not accessible
    
    return 0;
}