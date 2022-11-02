#include <iostream>
#include <string>

using namespace std; 

int main()
{
    int numPupils, busCapacity;
    int numBuses, numPupilsInTheLastBus;

    cout << "Enter the number of pupils: ";
    cin >> numPupils;

    cout << "Enter the capacity of the bus: ";
    cin >> busCapacity;
    
    numBuses =  numPupils / busCapacity;
    numPupilsInTheLastBus = numPupils % busCapacity;

    cout << "Number of buses : " << numBuses <<endl;
    cout << "Number of pupils in the last bus :" << numPupilsInTheLastBus << endl;

    system("pause");
    return 0;
}