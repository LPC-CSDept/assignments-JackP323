#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

double *makeNumbers(int N);
void printNumbers(double * const ptr, int N);
void sortNumbers(double * const ptr, int N);
void deleteNumbers(double * ptr);


int main()
{
    const 	int N=10;
    double 	*ptr=nullptr;

    ptr = makeNumbers(N);
    std::cout << "\n Initial Values: \n";
    std::cout << "-------------------------\n";
    printNumbers(ptr, N);
    sortNumbers(ptr, N);
    std::cout << "\n Sorted Values: \n";
    std::cout << "-------------------------\n";
    printNumbers(ptr, N);
    deleteNumbers(ptr);
}

void printNumbers(double * const ptr, int N)
{
    for(int i=0; i<N; i++){
        std::cout << std::fixed << std::setprecision(2) << *(ptr+i) << std::endl;
    }	

}
void sortNumbers(double * const ptr, int N)
{
    for(int i = 0; i < N-1; i++){
        for(int j = 0; j < N-1; j++){
            if (*(ptr+j) > *(ptr+j+1)){
                std::swap (*(ptr+j),*(ptr+j+1));
            }
        } 
    }
}
double *makeNumbers(int N)
{
    double *ptr = new double[N];
    srand(time(0));
    for(int i=0; i<N; i++){
        ptr[i] =rand()/ 1403 ;
    }
    return ptr;	
}
void deleteNumbers(double * ptr)
{
    delete ptr;
}