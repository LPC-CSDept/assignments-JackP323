#include <iostream>
using namespace std;

int *fillupArray(int);
void printArray(int*, int);

int main()
{   
  const int index = 10;
  int *ptr = fillupArray(index);
  printArray(ptr, index);
  
}

int *fillupArray(int index)
{
  srand(time(0));
  int *ptr2 = new int[index];
  for(int i=0;i<index;i++)
  {
    ptr2[i] = rand()%100;
  }

  return ptr2;
}

void printArray(int *ptr, int index)
{
  for(int i=0;i<index;i++)
    cout << ptr[i] << endl;
}