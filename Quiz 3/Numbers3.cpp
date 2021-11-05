#include "Numbers3.hpp"

Numbers::Numbers()

{
  ID= -1;
}

Numbers::Numbers(int id, int size)

{
  ID = id;
  for(int i=0; i <size; i++)
}
{
  int x =rand() % 100;
  numbers.push.back(x);
}

int Numbers::getID() const 
{
  return ID;
}

int Numbers::getSize() const
{
  return numbers.size();
}

int Numbers::getElm(int i) const
{
  return numbers.at(i);
}

int Numbers::getMax() const
{
  int Max = getElm(0); // initializing max as the first
  for(int i = 1; i < getSize(); i++)
  {
    if(getElm(i) > Max)
    Max = getElm(i);
  } 
  return Max;
}

int Numbers::getMin() const
{
  int Min = getElm(0); // initializing min as the first
  for(int i = 1; i < getSize(); i++)
  {
    if(getElm(i) < Min) // update the min element
    Min = getElm(i);

  }
  return Min;
}

int Numbers::getSum() const
{
  int sum = 0; // initializing sum with zero
  for(int i = 0; i < getSize(); i++)
  {
    sum += getElm(i); // include the current element in sum
  }
  return sum;
}

void Numbers::deleteElm(int d)
{
  numbers.erase(remove(numbers.begin(), numbers.end(), d), numbers.end()); 
}