#include <iostream>
using  namespace std;
class Base{
    /**
     * only accessible from class
     *
     */
private:
    int privateVariable;
public:
    int publicVariable;
protected:
    int protectedVariable;




};
class Derived: protected Base {
    protected:
    int secondchild;
// public:

//     void setProtectedVariable(int x)
//     {
//         protectedVariable =x;
//     }
// public:
//    int getProtectedVariable()
//    {
//        return protectedVariable;
//    }

};


class child: public Derived {
public:
// void setsecondchild(int y){
//     secondchild=y;
// }
// int getsecondchild()
//    {
//        return secondchild;
//    }
   void setProtectedVariable(int x)
    {
        protectedVariable =x;
    }
public:
   int getProtectedVariable()
   {
       return protectedVariable;
   }
};

int main()
{
    Derived d;
    // d.setProtectedVariable(10);
    // cout<<"Protected Variable==>"<<d.getProtectedVariable();
    child c;
    // c.setsecondchild(5);
    // cout<<"second protected variable==>"<<c.getsecondchild();
    c.setProtectedVariable(10);
    
    cout<<c.getProtectedVariable();

}