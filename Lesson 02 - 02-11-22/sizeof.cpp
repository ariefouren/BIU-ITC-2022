#include <iostream>
using namespace std; 

int main()
{
    cout << "short :" << sizeof(short) << " byte" << endl ;
    cout << "int :" << sizeof(int) << " byte" << endl ;
    cout << "long :" << sizeof(long) << " byte" << endl ;
    cout << "float :" << sizeof(float) << " byte" << endl ;
    cout << "double :" << sizeof(double) << " byte" << endl ;
   
    cout << "char :" << sizeof(char) << " byte" << endl ;
    cout << "bool :" << sizeof(bool) << " byte" << endl ;

    system("pause");
    return 0;
}