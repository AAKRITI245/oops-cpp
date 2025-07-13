#include<iostream>
using namespace std;

class Constructor {
private:
    int rollno;
    string name;

public:
//     // Default constructor
    Constructor() {
        cout << "Default constructor called" << endl;
        rollno = 0;
        name = "Not Set";
    }
    ~Constructor(){
    cout<< "Constructor destroyed" << endl;
}

Constructor(int x, string y) {
    rollno = x;
    name = y;

}

void display(){
    cout<< "detail="<<"ROLL_NO:==>"<< rollno << " NAME:==>" << name << endl;
}

};
int main(){
    Constructor c1(1, "John");
    Constructor c2;
    c2.display();
    c1.display();

}
