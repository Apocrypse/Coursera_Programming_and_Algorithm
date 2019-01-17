#include <iostream>
#include <string.h>
using namespace std;

class Cstudent {
    private:
        char name[50];
        int age;
        char sid[20];
        int grades[4] = { 0 };
    
    public:
        void Init(char name_[50], int age_, char sid_[20]) {
            strcpy(name, name_);
            age = age_;
            strcpy(sid, sid_);
        }
        void setGrade(int year, int grade);
        void print();
};
void Cstudent::setGrade(int year, int grade) {
    grades[year - 1] = grade;
}
void Cstudent::print() {
    int avg;
    avg = (grades[0] + grades[1] + grades[2] + grades[3]) / 4;
    cout << name << ',' << age << ',' << sid << ',' << avg << endl;
}

int main() {
    Cstudent student;
    char name[50];
    int age;
    char sid[20];
    
    char comma;
    cin.getline(name, 50, ',');
    cin >> age >> comma;
    cin.getline(sid, 20, ',');
    student.Init(name, age, sid);
    
    int grades[4];
    cin >> grades[0] >> comma >> grades[1] >> comma >> grades[2] >> comma >> grades[3];
    for (int i = 1; i <= 4; i++) {
        student.setGrade(i, grades[i - 1]);
    }
    
    student.print();
    return 0;
}