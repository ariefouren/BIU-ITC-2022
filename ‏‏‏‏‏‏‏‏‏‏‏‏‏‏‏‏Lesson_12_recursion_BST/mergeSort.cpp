#include <iostream>
#include <iomanip>      // setw(), setpricision()
#include <stdlib.h>     // for srand(), rand(), RAND_MAX
#include <time.h>       // for time()

#define WIDTH 10
using namespace std; 

void merge(int array[], int aux[], int lowIndex, int midIndex, int hiIndex);
void mergeSort(int array[], int aux[], int lowIndex, int hiIndex);

void mergeSort(int array[], int aux[], int lowIndex, int hiIndex)
{
    if(lowIndex >= hiIndex) return; 
    int midIndex = (hiIndex + lowIndex)/2;
    mergeSort(array, aux, lowIndex, midIndex);
    mergeSort(array, aux, midIndex + 1, hiIndex);
    merge(array, aux, lowIndex, midIndex, hiIndex);

}

void merge(int array[], int aux[], int lowIndex, int midIndex, int hiIndex)
{
    // copy from array[lo .. hi] to aux[low .. hi]
    for(int i = lowIndex; i<=hiIndex; i++)
    {
        aux[i] = array[i];
    }

    int i = lowIndex; 
    int j = midIndex+1;
    for(int k = lowIndex; k <= hiIndex; k++)
    {
        if(i > midIndex)            array[k] = aux[j++];
        else if(j > hiIndex)        array[k] = aux[i++];
        else if(aux[i] < aux[j])    array[k] = aux[i++];
        else                        array[k] = aux[j++];
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

int main()
{
    int numValues;
    cout << "Enter the number of values to sort : ";
    cin >> numValues;

    // create dynamic array and fill it with random values
    int* array = new int[numValues];
    // auxillary array used by merge sort
    int* aux = new int[numValues];

    srand (time(NULL));
    for(int i = 0; i<numValues; i++)
    {
        array[i] = rand();
    }

    // print unsorted array
    cout << "Unsorted array :" << endl;
    printArray(array, numValues);

    // sort the array using the bubble sort
    mergeSort(array, aux, 0, numValues-1);

    // print sorted array
    cout << "Sorted array :" << endl;
    printArray(array, numValues);

    system("pause");
    return 0;
}  

