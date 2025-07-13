#include <iostream>
using namespace std;
class parent{
    public:
int add(int a, int b) {
    return a + b;
}
};
class child : public parent {
    public:
int add(int a, int b, int c) {
    return a + b + c;
}};

int main() {
   child obj;
//    parent p;
//    p.add(1, 2); 
//    obj.add(1, 2);
   obj.add(1,2,3) ;
   obj.parent::add(1, 2);
    cout << "Result from child class add: " << obj.add(1, 2, 3) << endl;
    cout << "Result from parent class add: " << obj.parent::add(1, 2) << endl;
    return 0;
}