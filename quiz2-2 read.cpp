#include <iostream>
#include <fstream>
using namespace std;


const int LEN_NAME =20;
const int NUM_SCORES =3;


struct student{
  int sid;
  char sname[LEN_NAME];
  double score[NUM_SCORES];
  double msize;
};

int main()
{
  student *ptr = new student;

  fstream file;
  file.open("1students.bin");

  file.read((char *)&(*ptr), sizeof(*ptr));
  ptr->msize = sizeof(*ptr);

  double sum, average;
  
  for(int i=0;i<30;i++)
  {
    sum = ptr->score[i] + ptr->score[i+1] + ptr->score[i+2];
    average = sum/3;
    for(int j=0;j<10;j++)
    {
      if(average > 85)
      {
        cout << " the student name is " << ptr->sname << endl;
        cout << " the student id is " << ptr->sid << endl;
        cout << " the student first score is " << ptr->score[0] << endl;
        cout << " the student second score is " << ptr->score[1] << endl;
        cout << " the student third score is " << ptr->score[2] << endl;
        cout << endl << endl;
      }
      else
        cout << " the student's average score is below 85 " << endl;
  }
  }
  return 0;
}