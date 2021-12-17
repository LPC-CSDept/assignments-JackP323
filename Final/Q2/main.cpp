#include <iostream>
#include <fstream>
#include "Course.h"

using namespace std;

int partition(Course [], int, int);
void quick_sort(Course [], int, int);
void recursive_quick_sort(Course[], int, int);
void print(Course [], int);

int main() {
  int SIZE 10;
  Course Courses[SIZE];
  fstream ifs;
  ifs.open("Courses.txt");
  
  for (int i = 0; i < SIZE; i++) {
    int ID;
    string name;
    int credit;
    ifs >> ID >> name >> credit;
    Courses[i].setCourse(ID, name, credit);
  }
   cout << "The unsorted courses are:" << endl;
  print(Courses, SIZE);


  
  cout << "\n\nThe sorted courses using recursive quickSort are:\n";
  recursive_quick_sort(Courses, 0, SIZE - 1);
  print(Courses, SIZE);
  
  ifs.close();
}


void quick_sort(Course arr[], int low, int high) {

  
  int stack[high - low + 1];
  int top = -1;

  
  stack[++top] = low;
  stack[++top] = high;

  
  while (top >= 0) {
    high = stack[top--];
    low = stack[top--];

    int pivot = partition(arr, low, high);

    // left side, push left
    if (pivot - 1 > low) {
      stack[++top] = low;
      stack[++top] = pivot - 1;
    }

    // right side, push right
    if (pivot + 1 < high) {
      stack[++top] = pivot + 1;
      stack[++top] = high;
    } 
  }
  
}