 #include <iostream>
using namespace std;

void printArray(int * const, int );
int main()
{

	int 	num[5] = {10, 20, 30, 40, 50};
	int 	* ptr;

		
	printArray(num, 5);

}

void printArray(int * const ptr, int N)
{

	for(int i=0; i<N; i++)
		cout << *(ptr+i) << "\t";
	cout << endl;
}

