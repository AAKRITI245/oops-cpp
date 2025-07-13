#include<iostream>
 using namespace std;
 class student{
  
    public:
    int id;
    string name;
    static string section;
     static string collegename;
     void display(){
    cout<<"name==>"<<name<<endl;
    cout<<"College name ==>"<< collegename << endl;
      cout<<"Section ==>"<< section << endl;
 }
 };

string student::collegename;
string student::section; // static variable initialization
 int main(){
student std1,std2,std3;
std1.collegename= " radiant";
std1.name =" Aakriti";
std1.section = "CSE";
std1.display();
std2.name="Gautam";
std2.display();
std3.name="aakriti";
std3.display();
return 0;
 }