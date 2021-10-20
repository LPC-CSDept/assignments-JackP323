#include <iostream>
#include <fstream>
using namespace std;


const int LEN_NAME =20;
const int NUM_SCORES =3;


struct student{
  int sid;
  char sname[LEN_NAME];
  double score[NUM_SCORES];
};

int main()
{
  student *ptr = new student;

  fstream file;
  file.open("students.bin");
  file >> ptr->sid;
  file >> ptr->sname;
  file >> ptr->score[0];
  file >> ptr->score[1];
  file >> ptr->score[2];

  file.write((char *)&(*ptr),sizeof(*ptr));
}