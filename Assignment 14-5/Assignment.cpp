#include "Assignment.hpp"

Numbers::Numbers(){
  size = 0;
  numbers = nullptr;
}
Numbers::Numbers(int s){
  size = s;
  numbers = new int [s];
   for (int i=0; i<s; i++){
        int n = rand() % 100;
        numbers[i]=n;
}}
Numbers::Numbers(const Numbers &n){
  size = n.size; //copying size
  numbers = new int[size]; //new memory space
  for(int i = 0; i < size; i++){
        numbers[i] = n.numbers[i]; //copying all elements
}}

void printNumbers(Numbers n) {
  for (int i=0; i<n.size; i++){
        cout << n.numbers[i] << endl;
    }
}

Numbers::~Numbers(){
  delete[] numbers;
}

int Numbers::operator>(const Numbers &n){
int n1= 0, n2 = 0;

//sum all values to compare
for(int i =0; i < size; i++){
  n1+=numbers[i]; 
}
for(int i =0; i < n.size; i++){
  n2+=numbers[i]; 
}

if (n1>n2) 
return 1; // 1 = true
else 
return 0; // 0 = false
}

Numbers Numbers::operator=(const Numbers &n){
size = n.size;
numbers = new int[size]; //new memory space
for(int i =0; i < size; i++){
  numbers[i] = n.numbers[i]; //copy all numbers in the new array
}
return *this;
}

Numbers Numbers::operator+(const Numbers &n){
Numbers n1;
n1.size = size;
n1.numbers = new int[n1.size];
for(int i=0; i<size; i++){
  n1.numbers[i] = this->numbers[i] + n.numbers[i];
}
return n1;
}