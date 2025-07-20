#include <iostream>
#include <string>
using  namespace std;
class Base{
public:
    Base():Base(10)
    {
     cout<<"Default construtor of base class called"<<endl;
     
    }

    Base(int x):Base(1,2,3)
    {
       cout<<" Constructor of base class"<<endl;
    }

    Base(int x,int y,int z)
    {
        cout<<" Constructor with 3 argument"<<endl;
    }


};
class Derived: public Base {

public:Derived(): Derived(10)
    {
    cout<<"Child class constructor called";
    }

    Derived(int x)
    {
        cout<<"Child class constructor with single argument called"<<endl;
    }


//public:
//    Derived():Base()
//    {
//
//    }
};

int main()
{
    Derived d;

}""