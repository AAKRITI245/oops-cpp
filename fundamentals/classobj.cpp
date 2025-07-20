#include <iostream>
#include<string>
using namespace std;
class Student {
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
    void setAddress(string address){
        this->address=address;

    }
    int getID(){
        return ID;
    }
    string getName(){
        return name;
    }
    string getAddress(){
        return address;
    }
};
int main(){
    Student std;
    std.setID(1);
    std.setName("Aakriti Gautam");
    std.setAddress("Drivertole");
    cout<<"my ID==>"<<std.getID()<<endl;
    cout<<"My Name==>"<<std.getName()<<endl;
    cout<<"my Address==>"<<std.getAddress()<<endl;
    return 0;   
   
}