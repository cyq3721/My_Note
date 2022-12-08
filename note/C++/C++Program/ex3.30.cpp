#include <iostream>
#include <string>
using namespace std;

class Student {
private:
  char name[10];
  int deg;
public:
  Student(char na[]=" ", int d=0){
    deg = d;
    strcpy(name,na);
  }

  char *getname(){
    return name;
  }

  int getdeg(){
    return deg;
  }

  friend int compare(Student &s1, Student $s2);
  
};

int compare(Student &s1, Student &s2){
    if(s1.deg>s2.deg) return 1;
    else if(s1.deg == s2.deg) return 0;
    else return -1;
}
