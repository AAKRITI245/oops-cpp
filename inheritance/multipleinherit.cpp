#include<iostream>
#include<string>
using namespace std;
//two base 1 child
class Base1{
    protected:
    int x;
    public:
    int z;
    string name;
};
class Base2{
protected:
int y;
public:
int z;
string address;
};

class child:public Base1,public Base2{
public:
void setid(int id)
{
    id=x;
}
void setname(string name){
this->name=name;
}
void setaddress(string address){
    this->address=address;

}
void setage(int age){
    age=y;
}
int getid(){
    return x;
}
int getage(){
    return y;
}
string getname(){
    return name;
}
string getaddress(){
    return address;
}
};
int main(){
    child c1;
    // cout<<c1.z;
    c1.setname("Aakriti");
    c1.setid(1);
    c1.setage(19);
    c1.setaddress("butwal");
    cout<<"NAME==>"<<c1.getname()<<endl;
        cout<<"ID==>"<<c1.getid()<<endl;
            cout<<"AGE==>"<<c1.getage()<<endl;
                cout<<"ADDRESS==>"<<c1.getaddress()<<endl;
}