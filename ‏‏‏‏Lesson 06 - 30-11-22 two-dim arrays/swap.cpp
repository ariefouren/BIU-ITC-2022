#include <iostream>
using namespace std; 

void swapByValue(double x, double y);
void swapByReference(double &x, double &y);

int main()
{
    double x, y;

    cout << "Enter x = ";
    cin >> x;
    
    cout << "Enter y = ";
    cin >> y;
    
    swapByValue(x, y);

    cout << "After swap by value: x = " << x << " y = " << y << endl;

    swapByReference(x, y);

    cout << "After swap by reference: x = " << x << " y = " << y << endl;
    system("pause");
    return 0;
}

void swapByValue(double x, double y)
{
    double tmp = x;
    x = y;
    y = tmp;
}

void swapByReference(double &x, double &y)
{
    double tmp = x;
    x = y;
    y = tmp;
}