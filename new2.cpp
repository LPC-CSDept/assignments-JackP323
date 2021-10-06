#include <iostream>
using namespace std;

double *makeArray(int bunch);

int main()
{
	double *ptr;

	ptr = makeArray(20);

}


double *makeArray(int bunch){
  double *apple =  new double[bunch];
  for(int i = 0; i < bunch; i++){
    apple[i] = i;
  }
  return apple;
}