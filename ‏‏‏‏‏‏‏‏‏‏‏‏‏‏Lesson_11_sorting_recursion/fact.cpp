#include <iostream>
#include <iomanip>      // setw(), setpricision()

#define WIDTH 2
using namespace std; 

#define VERBOSE 
#ifdef VERBOSE
int recursionLevel = 0;     // global variable used for indented recursive output
#endif

int fact(int n)
{
    int result;
    #ifdef VERBOSE
    recursionLevel++;
    for(int i=0; i<= recursionLevel; i++){cout << "  ";} // make indents according to the level of recursion
    cout << "fact("<< n << ")";
    cout << "     &n = "<< &n;
    cout << "     &result = " << &result;
    cout << "     &recursionLevel = " << &recursionLevel<< endl;
    #endif

    if(n == 0) 
    { 
        result = 1;
    }
    else                // n > 0
    {
        result = n * fact(n-1);
    }
    #ifdef VERBOSE
    for(int i=0; i<= recursionLevel; i++){cout << "  ";} // make indent according to the level of recursion
    cout << "return fact("<< n << ") =  " << result << endl;
    recursionLevel--;
    #endif

    return result;
}
int main()
{
    int n;
    cout << "Enter n :";
    cin >> n;

    cout << n <<"! = " << fact(n) << endl;

    system("pause");
    return 0;
}  

