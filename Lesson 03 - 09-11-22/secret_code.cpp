#include <iostream>
#include <stdlib.h>     // for srand(), rand()
#include <time.h>       // for time()
using namespace std;


int main()
{
    const int NUM_DIGITS = 6;
 
    // initialize random seed
    srand (time(NULL));
    
    cout << "Secret code : ";
    for(int i = 1; i<= NUM_DIGITS; i++)
    {
        // generate random number between 0 and 9
        // rand() geneartes random number between 0 and RAND_MAX
        cout << rand() % 10 ;  
    }
    cout << endl;
    system("pause");
    return 0;
}