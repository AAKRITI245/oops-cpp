#include <iostream>
#include <string>
using namespace std;
class Complex{
    public:
    int real;
    int img;
    Complex(){
        real=0;
        img=0;
    }
    Complex(int r,int i ){
        real =r;
        img=i;

    }
    Complex operator+(Complex c){
        Complex temp;
        temp.real=real+c.real;
        temp.img=img+c.img;
        return temp;
    }
    void display(){
        cout<<real<<"+"<<img<<"i"<<endl;

    };
};
int main(){
    Complex c1(2,3);
    Complex c2(4,5);
    Complex c3=c1+c2;
    c3.display();
    
}