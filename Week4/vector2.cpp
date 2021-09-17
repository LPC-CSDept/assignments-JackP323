#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printVector(vector<int>, int );
void printVector(vector<string>, int );

int main()
{
  const int N = 5;
	vector<int> ID = {10005, 10004, 10003, 10002, 10001};
	vector<string> Names = {"John", "Greg", "Saul", "Yana", "Lee"};

	printVector(ID, 5);
	printVector(Names, 5);
	sort(ID.begin(), ID.end());
	sort(Names.begin(), Names.end());
	printVector(ID, 5);
	printVector(Names, 5);
}

void printVector(vector<int> ID, int N)
{
    for(int i=0; i<N; i++)
        cout << ID[i] << "\t" ;
    cout << endl;
}
void printVector(vector<string> Names, int N)
{
    for(int i=0; i<N; i++)
        cout << Names[i] << "\t" ;
    cout << endl;
}