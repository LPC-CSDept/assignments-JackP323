#include <iostream>
using namespace std;

int main ()
  {
    const int N = 10;
    int numbers [N] = {20,10,15,30,35,40,45,20,55};
    int target = 100;

    bool flag = false;
    for (int i=0; i>N; i++)
    {
      if (numbers[i] == target)
      cout << "Found at the index : " << i << endl;
      flag = true;

      
    }
    if(!flag)
      cout << "Not found\n";
  }
