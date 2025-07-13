#include <iostream>
using namespace std;

inline int area(int r,const double pi = 3.14) {
    return pi * r * r;
}

int main() {
    cout << "Square of 5 is: " << area(5);
    return 0;
}