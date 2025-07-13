#include<iostream>
#include<string>
using namespace std;
class parent{
    private:
    int privatevariable;

    public:
    int publicvariable;

    protected:
    int protectedvariable;

};
class child1:public parent{

public:
     int privatevariable;
void setid(int id){
protectedvariable=id;

}
int getid(){
    return protectedvariable;
}

};
class child2:public parent{
public:
void setid(int id){
    protectedvariable=id;
}
int getid(){
    return protectedvariable;
}

};

int main(){
    child1 c;
    c.setid(2);
    c.getid();
    cout<<"ID ==>"<<c.getid()<<endl;
    child2 c1;
    c.setid(3);
    c1.getid();
    cout<<"ID of child 2==>"<<c1.getid();
    
}