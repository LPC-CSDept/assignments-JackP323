#include <iostream>
#include <fstream>
using namespace std;

const int 	MAX_LEN = 20;
const int 	NUM_SCORES = 3;

struct Students {
	int 	sid;
	char 	sname[MAX_LEN];
	double 	scores[NUM_SCORES];
}

Students *makeStudents(int );
void printStudents(Students * const, int);
void sortStudents(Students * const, int);


int main()
{
    const int N=10;
    Students *ptr=nullptr;
    ptr = makeStudents(N);
    printStudents(ptr, N);
    sortStudents(ptr, N);
    printStudents(ptr, N);
}

void printStudents(Students * const s, int N)
{
  for(int i=0;i<N;i++)
 	{
		cout << s[i].sid << "\t" << s[i].sname << "\t";
		for(int j=0; j<NUM_SCORES; j++)
			cout <<  s[i].scores[j] << "\t";
		cout << endl;
	}
	cout << "=============== \n";
}

Students *makeStudents(int N){
  
  ifstream ifs;
  Students* s = new Students[N];
  ifs.open("students.txt");

	if ( ifs.fail())
	  {
		cerr << "File Open Error\n";
		exit(0);
	  }

	for(int i=0;i<N;i++)
	  {
		ifs >> s[i].sid >> s[i].sname;
		for(int j=0; j<NUM_SCORES; j++)
			ifs >> s[i].scores[j] ;
     	if ( ifs.fail() )
		 {
			cerr << "File Read Error\n";
			exit(0);
		 }
}
 return s;
}
void sortStudents (Students * const s, int N){
	int min_index;
	for(int i=0; i < N-1; i++)
	{
    min_index = i;
		for(int j=i+1; j<N; j++)
    {
			if (s[j].sid < s[min_index].sid)
      min_index = j;
		}
    swap(s[min_index], s[i]);
	}

}