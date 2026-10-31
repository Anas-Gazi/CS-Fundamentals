#include <iostream>
#include <string>
using namespace std;

class Employee
{
    int id;
    string name, department;
    float salary;

public:
    void setData(int i, string n, string d, float s)
    {
        id = i;
        name = n;
        department = d;
        salary = s;
    }

    void display(float limit)
    {
        if (salary > limit)
        {
            cout << "\nID: " << id;
            cout << "\nName: " << name;
            cout << "\nDepartment: " << department;
            cout << "\nSalary: " << salary << endl;
        }
    }
};

int main()
{
    Employee e1, e2, e3;

    e1.setData(101, "Rahim", "CSE", 30000);
    e2.setData(102, "Karim", "EEE", 20000);
    e3.setData(103, "Hasan", "CSE", 40000);

    float limit = 25000;

    cout << "Employees above salary threshold:\n";

    e1.display(limit);
    e2.display(limit);
    e3.display(limit);

    return 0;
}
