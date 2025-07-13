#include<iostream>
using namespace std;
class Complex{
    public:
    int real;
    int imag;
    Complex(){
        real = 0;
        imag = 0;
    }
Complex(int r,int i){
    real =r;
    imag=i;

}
Complex operator+( Complex c1){
Complex temp;
temp.real=real - c1.real;
temp.imag=imag - c1.imag;
return temp;

};
 void display(){
    cout<<real<<"+"<<imag<<"i"<<endl;
 };
};
int main(){
    Complex c1(2,3);
    Complex c2(4,5);
    // Complex c3 = c1 + c2; 
    Complex c3 =c1.operator+(c2);
    // Using operator overloading
    c3.display();
   
}