#include <iostream>
#include <iomanip>      // setw(), setpricision()
#include <stdlib.h>     // for srand(), rand(), RAND_MAX
#include <time.h>       // for time()

#define WIDTH 10
using namespace std; 

void bubbleSort(int array[], int size)
{
    for(int lastIndex = size - 1; lastIndex >=1; lastIndex--)
    {
        for(int i = 0; i< lastIndex; i++)
        {
            if(array[i] > array[i+1])
            {
                swap(array[i], array[i+1]);
            }
        }
    }
}

void printArray(int array[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << setw(WIDTH)  << array[i];
    }
    cout << endl;
}

void swap(int& x, int& y)
{
    int tmp = x;
    x = y;
    y = tmp;
} 

int main()
{
    int numValues;
    cout << "Enter the number of values to sort : ";
    cin >> numValues;

    // create dynamic array and fill it with random values
    int* array = new int[numValues];
    srand (time(NULL));
    for(int i = 0; i<numValues; i++)
    {
        array[i] = rand();
    }

    // print unsorted array
    cout << "Unsorted array :" << endl;
    printArray(array, numValues);

    // sort the array using the bubble sort
    bubbleSort(array, numValues);

    // print sorted array
    cout << "Sorted array :" << endl;
    printArray(array, numValues);

    system("pause");
    return 0;
}  
