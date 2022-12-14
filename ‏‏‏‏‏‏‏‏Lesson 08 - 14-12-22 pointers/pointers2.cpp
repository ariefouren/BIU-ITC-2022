#include <iostream>
#include <iomanip>      // std::setw()

using namespace std; 

int main()
{
    int x = 0;            
    int y = 1024;
    int* ptr1 = &x;
    int* ptr2 = &y;
    
    cout << " ptr1 : " <<  ptr1 << endl;
    cout << "*ptr1 : " << *ptr1 << endl;
    cout << " ptr2 : " <<  ptr2 << endl;
    cout << "*ptr2 : " << *ptr2 << endl << endl;

    ptr2 = ptr1;
    cout << "After ptr2 = ptr1 : " << endl;
    cout << " ptr1 : " <<  ptr1 << endl;
    cout << "*ptr1 : " << *ptr1 << endl;
    cout << " ptr2 : " <<  ptr2 << endl;
    cout << "*ptr2 : " << *ptr2 << endl << endl;

    *ptr2 = 2048;
    cout << "After *ptr1 = 2048 : " << endl;
    cout << " ptr1 : " <<  ptr1 << endl;
    cout << "*ptr1 : " << *ptr1 << endl;
    cout << " ptr2 : " <<  ptr2 << endl;
    cout << " x    : " << x << endl;
    cout << "*ptr2 : " << *ptr2 << endl<< endl;


   
  
    system("pause");
    return 0;
}
