#include <iostream>
#include <fstream>

using namespace std;

struct Student {
  int id;
  string sname;
  double score[2];
  double sum;
  double avg;
};

int main()
{
    ifstream ifs;
	ofstream ofs;
	
	Student s;
	ifs.open("students.txt");
    ofs.open("students.bin" );

	for( int i=0;i<10; i++)
	{
		ifs >> s.id;
		ifs >> s.sname;
		ifs >> s.score[0];
		ifs >> s.score[1];
		s.sum = s.score[0] + s.score[1];
		s.avg = s.sum / 2;
	}

	for( int i=0;i<10; i++)
	{
		cout << s.id << "\t" ;
		cout << s.sname << "\t";
		cout << s.score[0] << " " << s.score[1] << "\t";
		cout << s.sum << " " << s.avg << endl;
	}

	for( int i=0;i<10; i++)
		ofs.write( (char *)&s, sizeof(s));




}