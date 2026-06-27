#include <bits/stdc++.h>
using namespace std;
class Student{
  public:
  int id;
  char name[100];
  char section[100];
  int marks;
};



int main()
{
    int t;
    cin>> t;
    while (t--){
     Student a,b,c;
     cin>> a.id >> a.name >> a.section >> a.marks;
      cin>> b.id >> b.name >> b.section >> b.marks;
       cin>>c.id >> c.name >> c.section >> c.marks;


      Student high = a;
      if(b.marks > high.marks){
        high = b;
      } else if(b.marks == high.marks &&b.id< high.id){
        high = b;
      }

         if(c.marks > high.marks){
        high = c;
      } else if(c.marks == high.marks &&c.id< high.id){
        high = c;
      }
      cout<< high.id << " " << high.name << " " << high.section << " " << high.marks<< endl;
    }

 
       return 0;
}