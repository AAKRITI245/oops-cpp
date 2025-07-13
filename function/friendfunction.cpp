#include <iostream>
using namespace std;
class base{
    int a,b;
    public:
    base(int x,int y){
        a=x;
        b=y;
    }
    void show(){
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
    }
    void operator-(){
        -a=+a;
        -b=+b;
    }

    friend base operator-(base &b1){
        -b1.a=+b1.a;
        -b1.b=+b1.b;
        return b1;
    }
};
int main(){
base b1(-10,-20);

}