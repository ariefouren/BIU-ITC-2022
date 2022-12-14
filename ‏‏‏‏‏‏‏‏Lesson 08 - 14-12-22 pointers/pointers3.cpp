#include <iostream>
#include <iomanip>      // std::setw()

using namespace std; 

void swap(int* , int*); 

int main()
{
    int x = 0;            
    int y = 1024;
    int* ptrX = &x;
    int* ptrY = &y;

    cout << "The value of x      : " << x << endl;
    cout << "The value of y      : " << y << endl;
    swap(ptrX, ptrY);
    cout << "After swap(&x, &y)  : " << endl;
    cout << "The value of x      : " << x << endl;
    cout << "The value of y      : " << y << endl;
  
    system("pause");
    return 0;
}

void swap(int* ptr1, int* ptr2)
{
    int tmp;
    tmp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = tmp;
}


