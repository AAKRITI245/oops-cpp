#include<iostream>
#include<string>
using namespace std;
class employee{
    private:
    int Id;
    string name;
    string address;
public:
void setId(int Id){
    this->Id=Id;
}
void setName(string name){
    this->name=name;

}
void setAddress(string address){
    this->address=address;
}
int getId(){
    return Id;
}   
string getName(){
    return name;
}
string getAddress(){
    return address;
}
};
void addEmployee(employee emp){
    int id;
    string name;
    string address;
    cout<<"Enter your ID"<<endl;
    cin>>id;
    cout<<"Enter your name"<<endl;
    cin>>name;
    cout<<"Enter your address"<<endl;
    cin>>address;
    emp.setId(id);
    emp.setName(name);
    emp.setAddress(address);

}
void displayEmployee(employee emp){
    cout<<"My ID==>"<<emp.getId()<<endl;
    cout<<"My name==>"<<emp.getName()<<endl;
    cout<<"My address==>"<<emp.getAddress()<<endl;
}
void updateEmployee(employee emp){
    int id;
    string name;
    string address;
    cout<<"Enter your ID"<<endl;
    cin>>id;
    cout<<"Enter your name"<<endl;
    cin>>name;
    cout<<"Enter your address"<<endl;
    cin>>address;
    emp.setId(id);
    emp.setName(name);
    emp.setAddress(address);
};
int main(){
    employee emp;
    int choice;
   
    cout<<"1. Add Employee"<<endl;
    cout<<"2. Display Employee"<<endl;
    cout<<"3. Update Employee"<<endl;
    cout<<"Enter your choice"<<endl;
     cin>>choice;
    switch (choice){
        case 1:
            addEmployee(emp);
            break;
        case 2:
            displayEmployee(emp);
            break;
        case 3:
            updateEmployee(emp);
            break;
        default:
            cout<<"Invalid choice"<<endl;
    }
    return 0;
}

