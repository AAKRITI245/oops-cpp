#include<iostream>
#include<string>
using namespace std;
class Employee{
    private:
    int ID;
    string name;
    string address;
    public:
    void setID(int ID){
        this->ID=ID;
    }
    void setName(string name){
        this->name=name;
    }
        int getID(){
            return ID;
        }
        string getName(){
            return name;
        }

    };

int main(){
Employee emp;
int id;
string name;
cout<<"enter your ID"<<endl;
cout<<"enter your name"<<endl;
cin>>id;
cin>>name;
emp.setID(id);
emp.setName(name);
cout<<"my ID ==>"<<emp.getID()<<endl;
cout<<"my name ==>"<<emp.getName()<<endl;
}
