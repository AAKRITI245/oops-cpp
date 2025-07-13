#include <iostream>
using namespace std;
class Parent{
    protected :
    int id;
    string name;
    
    
};
class child: public Parent{
    public:
    // void setData(int i, string n){
    //     id = i;
    //     name = n;
    // }
    // void display(){
    //     cout << "ID: " << id << ", Name: " << name << endl;
    // }
   
};
class child2:public child{
    public:
    void setData(int i, string n){
        id = i;
        name = n;
    }
    void display(){
        cout << "ID: " << id << ", Name: " << name << endl;
    }

};
int main(){
    child2 c2;
    c2.setData(1,"aakriti");
    c2.display();
    
}