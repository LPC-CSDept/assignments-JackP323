#include <iostream>
#include <fstream>
#include "Course.h"

using namespace std;

int partition(Course [], int, int);
void quick_sort(Course [], int, int);
void recursive_quick_sort(Course[], int, int);
void print(Course [], int);

int main() {
  int SIZE = 10;
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


  
  cout << "The sorted courses are using  recursive quickSort are:";
  recursive_quick_sort(Courses, 0, SIZE - 1);
  print(Courses, SIZE);
  
  ifs.close();
  return 0;
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

  int partition(Course arr[], int low, int high){
    int pivot = arr[high].getID();
  int i = (low - 1);

  for (int j = low; j <= high - 1; j++) {
    if (arr[j].getID() <= pivot) {
      i++;
      swap(arr[i], arr[j]);
    }
  }
  swap(arr[i + 1], arr[high]);

  return (i + 1);


  
   

}
void recursive_quick_sort(Course arr[], int low, int high) {

  if (low < high) {
    int pivot = partition(arr, low, high);
    recursive_quick_sort(arr, low, pivot - 1);
    recursive_quick_sort(arr, pivot + 1, high);
  }

}
