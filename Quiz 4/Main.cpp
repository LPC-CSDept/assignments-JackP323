#include "Course.hpp"
#include <fstream>

using namespace std;

int main(){
 Course course[4];
 Student s;
 ifstream file;
 ifstream sfile;
 file.open("coursestudents.txt");
 

 for(int i=0; i<Course::getNumCourses(); i++){
 file>>course[i];
 cout<<course[i]<<endl;
}

file.close();

sfile.open("addstudents.txt");
int n, id, courseID; 
double score;
string courseName, name;
char grade;

while(sfile>>courseName>>n){

for(int i=0; i<Course::getNumCourses(); i++){
if(course[i].getCName()==courseName)
courseID = i;
}

for(int i=0; i<n; i++)
{
 sfile>>id>>name>>grade>>score;
 s.setStudent(id,name,grade,score);
 course[courseID].addStudent(s);
 }
cout<<"\n\n========================================";
cout<<"\nUpdated Students list for the Course "<<courseName<<endl;
cout<<"========================================\n\n";
cout<<course[courseID]<<endl;
}
cout<<"\n\n========================================";
cout<<"\nPrinting final list (updated)...\n";
cout<<"========================================\n\n";

 for(int i=0; i<Course::getNumCourses(); i++){
 cout<<course[i]<<endl;
}
}