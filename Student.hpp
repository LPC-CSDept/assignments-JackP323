#ifndef STUDENT_H
#define STUDENT_H
#include <string>
using namespace std;
#include <iostream>

class DOB{ 
    private:
    int month;
    int day;
    DOB dob;
    public:
    DOB();
    DOB(int month,int day);
    int getMonth() const;
    int getDay() const;
    void printDate() const;
    void setDOB(DOB dob);
    void setMonth (int month);
    void setDay(int day);
}

class student{
    private:
    int sid;
    string sname;
    DOB dob;
    public:
    student();
    student(string name, int sid, DOB dob)
    int getSID() const;
    string getSname() const;
    DOB getDOB() const;
    void setSname(string name);
    void setSID(int sid);
    void setDOB(DOB dob);
};