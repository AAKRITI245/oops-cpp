#include<iostream>
#include<string>
using namespace std;
class class1{
    public:
    int id;
    string name;
    string address;

};
int main(){
    class1 cls1,cls2,cls3;
    cls1.id=22;
    cls1.name="Aakriti";
    cls1.address="butwal";
    cout<<"the id of cls1 is==>"<<cls1.id<<endl;
    cout<<"name is ==>"<<cls1.name<<endl;
    cout<< "address==>"<<cls1.address<<endl;
    cls2.id=1;
    cls2.name="priyanka";
    cls2.address="butwal";
    // cout<<"information for CLS2 is==>"<<cls2.id,cls2.name,cls2.address<<endl;
return 0;
};