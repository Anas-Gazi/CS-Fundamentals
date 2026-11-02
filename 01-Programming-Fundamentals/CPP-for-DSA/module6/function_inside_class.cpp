#include <bits/stdc++.h>
using namespace std;
class Student{
  public:
  string name;
  int roll;
  int math;
  int english;
  Student(string name, int roll, int math, int english){
    this->name = name;
    this->roll = roll;
    this->math = math;
    this->english = english;
  }
  void hello(){
    cout << "Hello From " << name;
  }
  void total(){
    cout << "Total marks of " << name << " = "<< math+english << endl;
  }
};

int main()
{
   Student anas("Anas Khan", 22, 65,70);
   
    anas.total();
       return 0;
}