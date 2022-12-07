#include <iostream>
#include <iomanip>      // std::setw()
#include <string.h>

#define STR_LEN 20

#define WIDTH 4

using namespace std; 

void printStringInfo(char str[], int size);

int main()
{
    char word1[STR_LEN] = "abcdefgh";
    char word2[STR_LEN] = "ABCDEFGHIJ";

    cout << "array name   : " << "word1[]" << endl;
    printStringInfo(word1, STR_LEN);

    cout << "array name   : " << "word2[]" << endl;
    printStringInfo(word2, STR_LEN);


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