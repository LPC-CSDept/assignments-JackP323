#include "Numbers3.hpp"

Numbers::Numbers()

{
  ID= -1;
}

Numbers::Numbers(int id, int size)

{
  ID = id;
  for(int i=0; i <size; i++)

  int x =rand() % 100;
  numbers.push.back(i);
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
  int Max = getElm(0); 
  for(int i = 1; i < getSize(); i++)
  {
    if(getElm(i) > Max)
    Max = getElm(i);
  } 
  return Max;
}

int Numbers::getMin() const
{
  int Min = getElm(0); 
  for(int i = 1; i < getSize(); i++)
  {
    if(getElm(i) < Min) 
    Min = getElm(i);

  }
  return Min;
}

int Numbers::getSum() const
{
  int sum = 0; 
  for(int i = 0; i < getSize(); i++)
  {
    sum += getElm(i); 
  }
  return sum;
}

void Numbers::deleteElm(int d)
{
  numbers.erase(remove(~Numbers.begin(), numbers.end(), d), numbers.end()); 
}