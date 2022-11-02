#include <iostream>
#include <string>

using namespace std; 

int main()
{
   const int A_PLUS = 97;
   const int A = 93;
   const int A_MINUS = 90;

   string letterGrade;
   int grade;

   cout << "Ennter the grade :" ;
   cin >> grade;

   if(grade >= A_PLUS)
   {
        letterGrade = "A+";
   }
   else if(grade >= A)
   {
        letterGrade = "A";
   }
   else if(grade >= A_MINUS)
   {
        letterGrade = "A-";
   }
   else
   {
        letterGrade = "I do not know ...";
   }

   cout << "Letter grade : " << letterGrade <<endl;
    system("pause");
    return 0;
}