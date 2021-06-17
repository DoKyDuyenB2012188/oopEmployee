#include<iostream>
using namespace std;

class Employee {
private:
    string name;
    double salary;
public:
    Employee() {

    }
    Employee(string name, double salary) {
        this->name = name;
        this->salary = salary;
    }
    void setName(string name) {
        this->name = name;
    }
    void setSalary(double salary) {
        this->salary = salary;
    }
    string getName() {
        return this->name;
    }
    double getSalary() {
        return this->salary;
    }
    void display() {
        cout << "Name: " << this->name << endl;
        cout << "Salary: " << this->salary << endl;
    }
};

class Manager :public Employee {
private:
    int bonus;
public:
    Manager() {

    }
    Manager(string name, double salary, int bonus) : Employee(name, salary) {
        this->bonus = bonus;
    }
    void setBonus(int bonus) {
        this->bonus = bonus;
    }
    int getBonus() {
        return this->bonus;
    }
    double getSalary() {
        return Employee::getSalary() + this->bonus;
    }
    void display() {
        cout << "Name: " << getName() << endl;
        cout << "Salary: " << getSalary() << endl;
    }
};

int main()
{
    Employee s("nguyen van b", 2400);
    s.display();
    Manager s1 ("nguyen van a",3600,600);
    s1.display();
    return 0;
}
