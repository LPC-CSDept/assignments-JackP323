#include "Student.hpp"
#include <iostream>
using namespace std;


DOB::DOB() : month(1),day(1){}
DOB::DOB(int m,int d) : month(m),day(d){}
int DOB :: getMonth() const 
{ 
	return month;
}
int DOB :: getDay() const 
{ 
	return day;
}
void DOB :: printDate()const 
{
	cout << "DOB: " << month << "\t" << day << endl;
}
void DOB :: setDOB(int m , int d ) 
{
	month = m;
	day = d;
} 
void DOB :: setMonth( int m ) { month = m; }
void DOB :: setDay(int d) { day = d;}

void Student::setDOB(DOB d)
{
	dob = d;	
}

int getID() const 
{
    return ID;
}
string getSname() const 
{
    return sname;
}