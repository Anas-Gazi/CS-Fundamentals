#include <bits/stdc++.h>
using namespace std;

class Student
{
  public:
  int roll;
  int cls;
  double gpa;

  Student(int r, int c, double g){
    roll = r;
    cls =c;
    gpa = g;
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