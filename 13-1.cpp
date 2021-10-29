#include "students2.hpp"
#include<iostream>
using namespace std; 


int Student::getSid() const
{
	return sid; 
}

string Student :: getSname() const{
  return sname;
}

double Student :: getScores(int i) const
{
  return score[i];
}
double Student :: getAvg() const{
  return (score[0] + score[1] + score[2]) / 3;
}

void Student::setSid(int x) 
{
    sid = x;

}

void Student::setSname(string s)
{
	sname = s;
}
void Student::setScores(int idx,int value)
{
	score[idx] = value; 
}

int main()
{
	Student s1;
	s1.setSid(10001);
	s1.setSname("Joseph");
	for(int i=0;i<3;i++)
		s1.setScores(i, 90);

	cout << " Sudent Information \n";
	cout << "ID : " << s1.getSid() << endl;
	cout << "Name : " << s1.getSname() << endl;
	cout << "score 1 : " << s1.getScores(0) << endl;
	cout << "score 1 : " << s1.getScores(1) << endl;
	cout << "score 1 : " << s1.getScores(2) << endl;
	
}