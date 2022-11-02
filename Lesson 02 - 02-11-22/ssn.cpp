#include <iostream>
#include <string>

using namespace std; 

int main()
{
    int id;
    
    cout << "Enter id  : ";
    cin >> id;

    cout << "The last digit is : " << id % 10 << endl; 
    cout << "8 didits of id : " << id /10 << endl;
    
    system("pause");
    return 0;
}