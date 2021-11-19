#include "14-4.hpp"
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main(){
  srand(time(0));
  int bank[] = {1,2,2,1,5,6,5,4,6,98};

  Numbers n1(10);
  Numbers n2(n1);

  

  printNumbers(n1);
  cout << "Biggest number in n1: "<< n1.getMax() << endl;
  cout << endl;  
  printNumbers(n2);
  cout << "Biggest number in n2: "<< n2.getMax() << endl;

  


}