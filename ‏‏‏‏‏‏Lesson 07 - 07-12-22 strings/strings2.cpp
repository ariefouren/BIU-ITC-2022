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
    char word2[STR_LEN] = "ABC";

    cout << "array name   : " << "word1[]" << endl;
    printStringInfo(word1, STR_LEN);

    cout << "array name   : " << "word2[]" << endl;
    printStringInfo(word2, STR_LEN);
/*
    // strcat concatenates (adds) word2 to word1. We must be even more carful that word2 was declared 
    //  to be long enough to contain both word1 and word2, again word1 is not changed.
    cout << "after strcat( word1, word2) :" << endl;
    strcat( word1, word2);
    cout << "array name   : " << "word1[]" << endl;
    printStringInfo(word1, STR_LEN);

    cout << "array name   : " << "word2[]" << endl;
    printStringInfo(word2, STR_LEN);

*/

//  strcpy(word1, word2)   copies word2 onto word1. We must make sure that word2 was declared 
//  to be long enough to contain the current size of word1. (Note that word2 is not changed)

    cout << "after strcpy(word1, word2) :" << endl;
    strcpy(word1, word2);
    
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