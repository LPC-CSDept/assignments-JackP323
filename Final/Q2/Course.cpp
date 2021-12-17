#include "Course.h"
using namespace std;

Course :: Course() {
  ID = 400;
  name = "Kenneth";
  credit = 80;

} 

int Course::getID(){
    return ID;
}

string Course::getName(){
    return name;
}

int Course::getCredit(){
    return credit;
}

void Course::setCourse(int idnum, string coursename, int creditamount){
    ID=idnum;
    name=coursename;
    credit=creditamount;
}

void Course::printAll(){
    cout << ID << " " << name << " " << credit << endl;
}