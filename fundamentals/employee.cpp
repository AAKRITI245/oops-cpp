#include<iostream>
#include<string>
using namespace std;
class employee{
    public:
    
    int Id;
    string name;
    string address;
    float salary;
    
};
    int main(){
        int n;
        cin>>n;
    employee emp[n];
    for(int i=0;i<n;i++){
        cout<<"Enter your ID"<<endl;
        cin>>emp[i].Id;
        cout<<"Enter your name"<<endl;
        cin>>emp[i].name;
        cout<<"Enter your address"<<endl;
        cin>>emp[i].address;
        cout<<"Enter your salary"<<endl;
        cin>>emp[i].salary;

    }
    for(int i=0;i<n;i++){
        cout<<"My ID==>"<<emp[i].Id<<endl;
        cout<<"My name==>"<<emp[i].name<<endl;
        cout<<"My address==>"<<emp[i].address<<endl;
        cout<<"My salary==>"<<emp[i].salary<<endl;
    }
return 0;
}