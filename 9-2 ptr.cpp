#include <iostream>
using namespace std;

int main()
{

	
	int 	num1, num2, num3, num4, num5;
	num1 = 10;
	num2 = 20;
	num3 = 30;
	num4 = 40;
	num5 = 50;

	int 	* ptr;
	ptr =  &num1;

	cout << *ptr << "\t"; 
	cout << *(ptr+1) << "\t";
   cout << *(ptr + 2) << "\t";
  cout << *(ptr + 3) << "\t"; 
  cout << *(ptr + 4) << "\t"; 
}