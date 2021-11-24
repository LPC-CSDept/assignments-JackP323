#include "Student.hpp"

Student::Student(){
  ID = 1000;
  sname = "";
  grade = 0;
  scores = 0;
}

Student::Student(int id,string n,char g,double s){
ID = id;
sname = n;
grade = g;
scores = s;
}

void Student::setStudent(int id,string n,char g,double s){
ID = id;
sname = n;
grade = g;
scores = s;
}

int Student::getID(){
return ID;
}
string Student::getSName(){
return sname;
}
char Student::getGrade(){
return grade;
}
double Student::getScores(){
return scores;
}