#include <iostream>
using namespace std;
class newClass{
    private:
    int rollno;
    int age;

    public:
    void setRollno(int r){
        rollno = r;
    }
    void setAge(int a){
        age = a;
    }
    int getRollno(){
        return rollno;
    }
    int getAge(){
        return age;
    }
};

int main() {
    newClass obj;
    obj.setRollno(10);
    obj.setAge(20);
    cout << "Roll No: " << obj.getRollno() << endl;
    
    return 0;
}