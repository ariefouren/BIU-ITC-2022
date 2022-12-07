#include <iostream>
#include <iomanip>      // std::setw()
#include <string.h>     // for strln()

#define WIDTH 4

using namespace std; 

void printStringInfo(char str[], int size);


//Demonstrating strings operations
int main()
{   
    char word1[] = "abc defgh";
    int word1Len = strlen(word1) + 1; 

    printStringInfo(word1, word1Len);

    system("pause");
    return 0;

}

void printStringInfo(char str[], int size)
{
    cout << "string        : " << str << endl;
    cout << "array length  : " << size << endl;
    cout << "strlen()      : " << strlen(str) << endl;
    cout << "as integers   : ";
    for(int i = 0; i < size; i++)
    {
        cout << setw(WIDTH) <<  (int) str[i]; 
    }
    cout << endl << endl;
  

}

