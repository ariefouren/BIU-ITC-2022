#include <iostream>
using namespace std; 

int fact(int n);

int main()
{
    int n;
    cout << "Enter positive integer: ";
    cin >> n;

    cout << n << "! = " << fact( n ) << endl;

    system("pause");
    return 0;
}


int fact(int n)
{
    int fact = 1;
    for(int i = 1; i <= n;  i++)
    {
        fact = fact * i;
    }

    return fact;
}
