#include <iostream>
#include <time.h>
#include "Numbers3.hpp"

int findMax (Numbers *numberset, int size)
{
  int max_diff = -1;
  int max_ID;


for(int i = 0; i < size;i++)
  {
  int curr_diff = numberset[i].getMax() - numberset[i].getMin();
  if(curr_diff > max_diff)
    {
  max_diff = curr_diff;
  max_ID = numberset[i].getID();
    }
  }
 return max_ID;
}

void deDup(Numbers &numberset1, Numbers &numberset2)
{
  for(int i=0l i < numberset2.getSize(); i++)
  {
(numberset1.deleteElm(numberset2.getElm(i));

  }
}  

void printNumbers(Numbers &n)
{
  for(int i = 0; i < n.getSize(); i++)
  {
    cout << n.getElm(i) << " " ;
  }
  cout << endl;
}

void printNumberSet(Numbers *numberset, int size)
{
  for(int j = 0; j < size; j++)
  {
    printNumbers(numberset[j]);
  }
  cout << endl;
}

int main()
{
  srand(time(NULL));
  Numbers numberset[] = { Numbers(1,3), Numbers(2,5), Numbers(3,10), Numbers(4,5), Numbers(5,3)};

  for(int i = 0; i < 5; i++)
  {
    cout << "numberset["<<i<<"] =  ";

    for(int j = 0; j < numberset[i].getSize(); j++)
    {
      cout << numberset[i].getElm(j) << " ";
    }
    cout << endl;
 }

  cout << "Result of findMax = " << findMax(numberset, 5) << endl;

  deDup(numberset[0], numberset[1]);
  for(int i = 0; i < 5; i++)
  {
    cout << "numberset["<<i<<"] = ";
    for(int j = 0; j<numberset[i].getSize(); j++)
    {
      cout << numberset[i].getElm(j)<< " ";
    }
     cout << endl;
  }
  return 0;  
}
