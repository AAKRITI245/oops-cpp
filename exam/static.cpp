#include<iostream>
using namespace std;
class Variable{
public:
// int id;
string name;
static string collegename;
static int age;
void display (){
    // cout<< "ID==>"<<id<<endl;
    cout<< "Name==>"<< name<< endl;
    cout<< "Age==>"<<age<<endl;
    cout<<" collegename==>"<<collegename<<endl;

}
};
string Variable :: collegename;
int Variable :: age;
 
int main(){
    Variable v1;
    // v1.id=1;
    v1.name="Aakriti";
    v1.age=20;
    v1.collegename="kalika";
    v1.display();
    Variable v2;
    v2.name="Ankit";
    v2.collegename="radiant";

    v2.display();
    Variable v3;
    v3.name="Gautam";
    v3.display();
}