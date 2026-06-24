#include <bits/stdc++.h>
using namespace std;

class Student
{
  public:
  int roll;
  int cls;
  double gpa;

  Student(int roll, int cls, double gpa){
    this->roll = roll;
    (*this).cls =cls;
    this->gpa = gpa;
  }
};

int main()
{
  Student a( 10, 5, 5.56);
  Student b( 10, 5, 5.56);

    cout<< a.cls << " " << a.roll << " " << a.gpa << endl;
    cout<< b.cls << " " << b.roll << " " << b.gpa << endl;

       return 0;
}