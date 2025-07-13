// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Complex{
int real;
int imaginary;
public:
    Complex(int real, int imaginary)
    {
        this->real=real;
        this->imaginary=imaginary;
    }
    friend Complex operator -(Complex &c);
    void show()
    {
        cout<<"Real number is:"<<real<<endl;
        cout<<"Imaginary number is:"<<imaginary<<endl;
    }
};


Complex operator -(Complex &c){
    c.real=++c.real;
    c.imaginary=++c.imaginary;
    return c;
}

int main() {
    Complex c1(10,15);
    Complex c2 = -c1;
    c1.show();
    // c2.show();
    return 0;
}