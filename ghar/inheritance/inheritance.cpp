#include<iostream>
#include<string>
using namespace std;
class Person{
    public:
    string name;
    string address;
    string email;
Person(string name,string address,string email){
this-> name=name;
this->address=address;
this->email=email;
}
};

class student: public Person{
   public:
   
float fee;
float marks;
 int id;
student(float fee,float marks,int id):Person("Aakriti","Butwal","aakritig878@gmail.com"){
    this->fee=fee;
    this->marks=marks;
    this->id=id;
}
};
class teacher:public Person{
public:

float salary;
teacher(float salary):Person("Niraj Bhattarai","Cofee-company","nirajbhatt@gmIL"){
this->salary=salary;
}
};
int main(){
    student std1(5000,70.5,28) ;
    teacher t1(40000);
   cout<<"FEE==>"<<std1.fee<<endl;
   cout<<"name==>"<<std1.name<<endl;
   cout<<"salary==>"<<t1.salary<<endl;
    return 0;

};