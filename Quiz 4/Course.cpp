#include "Course.hpp"
#include <fstream>

int Course::NUM_COURSES=0;

Course::Course(){
NUM_COURSES++;
}
Course::Course(string n,int c,string s,vector<Student> st){
cname = n;
credits = c;
semester = s;
student = st;
NUM_COURSES++;
}

void Course::setCourse(string n,int c,string s,vector<Student> st){
cname = n;
credits = c;
semester = s;
student = st;
}

string Course::getCName(){
return cname;
}
int Course::getCredit(){
return credits;
}
string Course::getSemester(){
return semester;
}
vector<Student> Course::getStudents(){
return student;
}

void Course::addStudent(Student &s){
student.push_back(s);
}
int Course::getNumCourses(){
return NUM_COURSES;
}



istream &operator>>(istream &is, Course &course){
string cname, semester; 
int credits;
is >>cname >> credits >>semester;
int id,students; double score; string name;
char grade;
Student s;
is>>students;
for(int i = 0;i<students;i++){
        is >> id >> name  >> grade >> score;
        s.setStudent(id, name, grade, score);
        course.addStudent(s);
    }
    course.setCourse(cname, credits, semester, course.getStudents());
    return is;
}



ostream &operator<<(ostream &os, Course& course){
os<<course.getCName()<<" | "<<course.getCredit()<<" | "<<course.getSemester()<<endl;
vector<Student> s = course.getStudents();
os<<"Student ID\tName\tGrade\tScore"<<endl;
for(int i=0;i<s.size();i++){
  os<<s[i].getID()<<"\t\t";
  os<<s[i].getSName()<<"\t\t";
  os<<s[i].getGrade()<<"\t\t";
  os<<s[i].getScores()<<endl;
  }

return os;
}