#include <iostream>
#include <iomanip>      // std::setw()
#include <stdlib.h>     // for srand(), rand()
#include <time.h>       // for time()

#define WIDTH 4
using namespace std; 

void randomPermutation(int arr[], int n);
void printArray(int arr[], int n);
void swap(int& x, int& y);

int main()
{
    int size;
    cout << "Enter the number of elements :";
    cin >> size;

    int* arrayPtr = new int[size]; // create a dynamic array of integers
    
    randomPermutation(arrayPtr, size);
    cout << "Random permutation :" << endl;
    printArray(arrayPtr, size);
    cout << endl;

    delete [] arrayPtr;     // destroy the dynamic array 
                            // and return the memory to free-store

    system("pause");
    return 0;
}

void randomPermutation(int arr[], int n)
{
    // initialize the random generator
    srand(time(NULL));

    // initialize the array
    for(int i=0; i<n; i++)
    {
        arr[i] = i;
    }

    for(int lastElement = n-1; 0 < lastElement; lastElement-- )
    {
        int randIndex = rand() % (lastElement + 1); 
        swap(arr[lastElement], arr[randIndex]);

    }
}

void printArray(int arr[], int n)
{
    for(int i = 0; i< n; i++)
    {
        cout << setw(WIDTH) << arr[i];
    }
}

void swap(int& x, int& y)
{
    int tmp = x;
    x = y;
    y = tmp;
} 
