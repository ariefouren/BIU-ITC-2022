#include <iostream>
#include <cmath>        // for pow() 
using namespace std; 

int main()
{
    const int NUM_BITS = 16;
    int bits[NUM_BITS];

    int n = 0;

    // users' input
    cout << "Enter " << NUM_BITS << " bits: ";
    for(int i = NUM_BITS -1; i >= 0;  i--)
    {
        cin >> bits[i];
    }

    // compute the value of the sequence of bits
    for(int i = 0; i <= NUM_BITS - 1; i++)
    {
        n += bits[i] * pow(2, i); //2^i
    }

    cout << "Integer value : " << n << endl;

    system("pause");
    return 0;
}
