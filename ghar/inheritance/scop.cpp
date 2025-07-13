#include<iostream>
#include<string>
using namespace std;
class Parent{
    public:
    int publicvar;
    protected:
    int protectedvar;
};
class Child:protected Parent{
    public:
using Parent::protectedvar; // Inherit public member as protected
};
int main(){
    Child c;
    c.protectedvar = 10;
    cout<<c.protectedvar<<endl; // Accessing protected member
    return 0; // Error: publicvar is not accessible in Child
}