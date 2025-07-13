#include<iostream>
#include<string>
using namespace std;
class employee{
    public:
    int id;
    string name;
    float salary;

employee(){
    cout<<"this is default constructor"<<endl;
}
employee(int id){
cout<<"this is parametarized constructor"<<endl;
this->id=id;
}
};
int main(){
employee emp1;
employee emp2(2);
// cout<<emp2(2)<<endl;



// cout<<"ID==>"<<emp1.id<<endl;


return 0;
};