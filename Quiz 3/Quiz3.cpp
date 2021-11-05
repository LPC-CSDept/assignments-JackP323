#include <iostream>
#include <time.h>
#include "Numbers3.hpp"

int findMax (Numbers *numberset, int size)
{
  int max_diff = -1
  int max_ID;
}

for(int i = 0; i < size;i++)
{
  int curr_diff = numberset[i].getMax() - numberset[i].getMin();
  if(curr_diff > max_diff)
  {
  max_diff = curr_diff;
  max_ID = numberset[i].getID();
  }
}
 max_ID;


