#include<iostream>
#include<string>
using namespace std;
class employee{
   public:
    int Id;
    string name;
    string address;
};
void setmyID( employee emp[], int i,int n){
//    if(i==n) return;
    cout<<"enetr id :"<<endl;
    cin>>emp[i].Id;
   
    cout<<"enter name :"<<endl;
    cin>>emp[i].name;
   
    cout<<"enter address :"<<endl;
    cin>>emp[i].address; 
    setmyID(emp , i+1 , n) ;


    cout<<"my ID==>"<<emp[i].Id<<endl;
    cout<<"my name==>"<<emp[i].name<<endl;
    cout<<"my address==>"<<emp[i].address<<endl;
}
int main(){
    int n;
    cout<<"Enter the number of employees :"<<endl;
    cin>>n;
    employee emp[];
    setmyID(emp , 0 , n);
  
return 0;
}