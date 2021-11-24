#ifndef COURSE_H
#define COURSE_H

#include "Student.hpp"

class Course
{
private:
string cname;
int credits;
string semester;
vector<Student> student;
static int NUM_COURSES;

public:
Course();
Course(string,int,string,vector<Student>);

string getCName();
int getCredit();
string getSemester();
vector<Student> getStudents();
void setCourse(string,int,string,vector<Student>);
void addStudent(Student &s);

static int getNumCourses();
friend ostream &operator << 
(ostream &, Course &);
friend istream &operator >> (istream &, Course &);


};


#endif
