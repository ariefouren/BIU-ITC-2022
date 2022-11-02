#include <iostream>
#include <string>

using namespace std; 

int main()
{
   int grade;
   cout << "Ennter the grade :" ;
   cin >> grade;

   if(grade >= 60)
   {
        cout << "Passed :)" << endl;
   }
   else
   {
        cout << "Failed :(" << endl;
   }
    system("pause");
    return 0;
}