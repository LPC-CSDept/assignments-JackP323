#include <iostream>
using namespace std;

int main()
{
	int 	*ptr;

	ptr = new int;
	*ptr = 100;
	cout << *ptr << endl;  // 100








	int 	*aptr;

	aptr = new int [10]; // allocate memory space ( 4 bytes x 10 ) = 40 bytes 

	for(int i=0; i<10; i++)
		*(aptr+i) = i; // aptr + 0 , +1 , +2 



}