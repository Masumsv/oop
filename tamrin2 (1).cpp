#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    Person(string n, int a) : name(n), age(a) {}
    string GetName() { return name; }
    int GetAge() { return age; }
};

class Student : private Person {
private:
    double avg;
public:
    Student(string n, int a, double av) : Person(n, a), avg(av) {}
    double GetAvg() { return avg; }
    string GetStudentName() { return name; }
    int GetStudentAge() { return age; }
};

class Teacher : private Person {
private:
    double salary;
public:
    Teacher(string n, int a, double s) : Person(n, a), salary(s) {}
    double GetSalary() { return salary; }
    string GetTeacherName() { return name; }
    int GetTeacherAge() { return age; }
};

int main() {
    Person p("Ali", 30);
    cout << p.GetName() << endl;
    cout << p.GetAge() << endl;

    Student s("Sara", 20, 18.5);
    cout << s.GetStudentName() << endl;
    cout << s.GetStudentAge() << endl;
    cout << s.GetAvg() << endl;

    Teacher t("Mr. Reza", 45, 5000.0);
    cout << t.GetTeacherName() << endl;
    cout << t.GetTeacherAge() << endl;
    cout << t.GetSalary() << endl;

    return 0;
}
