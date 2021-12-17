#include <iostream>
#include <fstream>
#include "Course.h"
using namespace std;

int binarySearchIterative(Course array[], int N, int target){
      int first=0;
      int last=N-1;
      while (first<=last){
          int mid=(first+last)/2;
          if (array[mid].getID()==target)
              return mid;
          if (array[mid].getID()<target)
              first=mid+1;
          if (array[mid].getID()>target)
              last=mid-1;
      }
    return -1;
}

void printCourses(Course array[], int N){
    for (int i=0; i<N; i++){
        array[i].printAll();
    }
}

void bubbleSortbyID(Course s[], int N)
{
    for(int i=0; i<N-1; i++)
    {
        for(int j=0; j<N-i-1; j++)
        {
            if ( s[j].getID() > s[j+1].getID())
                swap(s[j], s[j+1]);
        }
    }
}

int main() {
  int ID;
  Course Courses[10];
  fstream file;
  int fileNumber;
  cout << "Enter 1 for File 1" << endl;
  cin >> fileNumber;
  if (fileNumber == 1) {
    file.open ("Courses.txt");
  }
    else {  
      
    }
}
