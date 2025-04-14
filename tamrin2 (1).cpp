#include <iostream>
using namespace std;

class person {
protected:
    string name;
    int age;
    public:
    person(string n, int a) : name(n), age(a) {}
    string GetName() { return name; }
    int GetAge() { return age; }

class Student : private Person
    {
        private : 
            double Avg;
        public :
            double GetAvg()
                 return Avg;
            string GetStudentName()
                return Name;
    };
    
class teacher : private person {
    private:
        double salary;
    public :
        double GetSalary()
            return Salary;
            
    double GetSalary() { return salary; }
    string GetTeacherName() { return name; }
    int GetTeacherAge() { return age; }
    
    int main()
{  
    Person p; 
    p.GetName(); //correct
    p.GetAge(); //correct
    p.Name; //incorrect
    p.Age; //incorrect
    
    Student s; 
    s.GetName(); //correct
    s.GetAge(); //correct
    s.Avg; //incorrect
    s.GetAvg(); //correct
    s.GetStudentName(); //correct
    
    Teacher t;
    t.GetName(); //correct
    t.GetAge(); //correct
    t.GetSalary(); //correct
    t.Salary; //incorrect
    
}
};