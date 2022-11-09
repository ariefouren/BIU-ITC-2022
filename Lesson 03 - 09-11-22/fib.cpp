#include <iostream>
using namespace std; 



int main()
{
    int max;

    int fib1 = 1;
    int fib2 = 1;
    int next = fib1 + fib2;

    do
    {
        cout << "Enter positive integer : ";
        cin >> max;

    } while ( max <= 0 );

    
    // compute fibonacci numbers
    cout << fib1 << " " << fib2 << " ";

    while (next <= max)
    {
        cout << next << " ";
        fib1 = fib2;
        fib2 = next;
        next = fib1 + fib2;
    }
    cout << endl;
    
    system("pause");
    return 0;
}


