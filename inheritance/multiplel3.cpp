#include<iostream>
#include<string>
using namespace std;
class Base1{
    public:
    Base1(){
    cout<< "Base1 constructor called" << endl;
}
void collision() {
    cout << "Collision method from Base1 called" << endl;
}
};
class Base2{
    public:
    Base2(){
    cout<< "Base2 constructor called" << endl;
}
void collision() {
    cout << "Collision method from Base2 called" << endl;
}
};
class Base3{
    public:
     Base3(){
    cout<< "Base3 constructor called" << endl;
}
};
class Child:public Base1, public Base2, public Base3 {
public:
void print(){
    Base2::collision();
    Base1::collision();
}

};

int main(){
    Child c; // This will call the constructors of Base1 and Base2
    return 0;
    
}