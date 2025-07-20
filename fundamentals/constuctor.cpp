//special member function
//no return type
//Name of the class
//Constructor

//Constructor is a special member function of a class that is automatically called when an object of the class is created.
 

#include<iostream>
#include<string>
using namespace std;
class employee{
private :
int id;
public:
employee(){

}
employee(int id){
    this->id=id;
}
void setId(int id){
    this->id=id;
}
int getId(){
    return id;
}
};
int main(){
    employee emp1;
    emp1.setId(20);
    cout<<emp1.getId()<<endl;
    
    return 0;
}