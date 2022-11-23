#include <iostream>
using namespace std; 

#define MAX_NUM_GRADES 10

void printGrades(double values[], int size);

int main()
{
    // users' input
    double grades[MAX_NUM_GRADES];
    int num_grades = 0;
    double next_val;

    cout << "Entter the list of grades, (-1 to finish) :";
    
    do
    {
        cin >> next_val;
        if(next_val >=0)
        {
            grades[num_grades] = next_val;
            num_grades ++;
        }    
    } while ((next_val >=0) && num_grades < MAX_NUM_GRADES);
    


    // copmute statistics


    // output
    printGrades(grades, num_grades);
    
    system("pause");
    return 0;
}

void printGrades(double values[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << values[i] << endl;
    }
}