#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> numbers {25,10,15,30,35,40,45,55,20,50};

  cout << numbers.size() << endl; 
  for(int i=0,i<numbers.size();i++)
  {
    for(int j=0; j<numbers.size(); j++)
      if ( numbers [j] > numbers [j +1])
        swap(numbers[j], numbers [j +1]);
    
  }

  
  for (int v : numbers)
    cout << v << "\t";
  cout << endl;





}