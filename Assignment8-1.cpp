#include <iostream>
#include <algorithm>
using namespace std;

int binarySearch (int [], int, int);

int main()
{
	const int N = 10;
	int numbers[N] = {10, 25, 30, 35, 40, 45, 55, 60, 65, 70 };
	int target = 35;
  int index;

index = binarySearch (numbers,N,target);
	// this function always returns -1
	
if (index == -1)
  cout << "not found\n";
else 
	// This else never be executed
  cout << "found at index : " << index << endl;
}
int binarySearch(int number[], int N, int target)
{
  int first, last, mid;
  first = 0;
  last = N-1;
  while (first <= last)
  {
    mid = (first + last) /2;
    {
      if (number [mid]  == target)
        cout << "found at index\n" << mid << endl;
       else if (number [mid] < target) 
       first = mid + 1;
       else
       last = mid - 1;

    }
    
  }

  return -1;
	// you have only one return statement with the value -1
}


