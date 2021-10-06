 #include <iostream>
using namespace std;

void getValue(int *);


int main()
{

	int 	num;
	int 	*ptr;

	getValue( &num );
	cout << num << endl;

}

void getValue(int *ptr)
{
	cout << "Enter your number :";
	cin >> *ptr;

}