#include<iostream>
#include<string>
using namespace std;
class Parent{
//in multilevel grandchild can inherit directly  parent also to thechild
protected:
int age;
float salary;
};
class child:public Parent{
    public:
int id;
string name;
};
class grandchild:public child{
public:
void setage(int age){
this->age=age;
}
int getage(){
    return age;

}
void setname(string name){
this->name=name;
}
string getname(){
    return name;
}

};
int main(){
    grandchild c;
    c.setname("Aakriti");
    c.getname();
    c.setage(3);
    c.getage();
    cout<<"AGE==>"<<c.getage()<<endl;
        cout<<"NAME==>"<<c.getage()<<endl;


}