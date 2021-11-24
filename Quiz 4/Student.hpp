#ifndef Student_H
#define Student_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student{
private:
int ID;
string sname;
char grade;
double scores;

public:
Student();
Student(int,string,char,double);

int getID();
string getSName();
char getGrade();
double getScores();
void setStudent(int,string,char,double);


};

#endif