#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int rollNumber;
    string name;

public:

    Student(int roll, string n) {
        this->rollNumber = roll;
        this->name = n;
    }
void addRollno(Student s){
  
        cout << "Roll Number of " << this->name << " is " << this->rollNumber << endl;
        cout << "Roll Number of " << s.name << " is " << s.rollNumber << endl;
    }

   
    Student operator +(Student s) {
        return Student(this->rollNumber + s.rollNumber, this->name + " & " + s.name);

}

     
    
   
};

int main() {
  Student Aakriti(1, "Aakriti");
    Student Aditi(2, "Aditi");
//    int sum1 = Aakriti.addRollno(Aditi);
    
    return 0;
}