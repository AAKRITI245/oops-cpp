// Assignment 3
#include<iostream>
#include<string>
#include<exception>
using namespace std;
int main()
{
    int id;
    string name;
    cout<<"Enter your id: "<<endl;
    cin>>id;
    
    cin.ignore();
    
    cout<<"Enter your name: "<<endl;
    getline(cin,name);
    
    try{
        if(id<=0)
        {
            throw runtime_error("Please enter a non negative id");
        }
        
        if(name.empty())
        {
            throw "Please enter name";
        }
        cout<<"your ID is==>"<<id<<endl;

        cout<<"your name is ==> "<<name<<endl;
     
    }
    catch(const exception& e)
    {
      cout<<e.what()<<endl;  
    }
    
    catch(const int* error)
    {
       cout<<error<<endl;   
    }
    
    // cout<<"";
    return 0;
}
