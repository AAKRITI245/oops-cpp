#include<iostream>
#include<string>
using namespace std;
class UsesofThis{
    private:
    int ID;
    string name;
    float salary;

    public:
    void setID(int ID){
        this->ID=ID;

    }
    void setname(string name){
        this->name=name;

    }
    void setsalary(float salary){
        this->salary=salary;
    }
    int getID(){
        return ID;

    }
    string getname()
    {
        return name;
    }
    float getsalary(){
        return salary;
    }

 
};
int main(){
    UsesofThis this1;
this1.setname("aakriti");
this1.setID(1);
this1.setsalary(222000.55);
cout<<"Name=>>"<<this1.getname()<<endl;
cout<<"ID==>"<<this1.getID()<<endl;
cout<<"Salary==>"<<this1.getsalary()<<endl;
return 0;

}
