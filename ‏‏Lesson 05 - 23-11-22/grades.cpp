#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std; 

#define MAX_NUM_GRADES 1000
#define WIDTH 10

void printGrades(double values[], int size);
void factor(double grades[], int size, double min_grade, double max_grade, double factor);
double average(double values[], int size);
double stdDev(double values[], int size);

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
    } while ((next_val >=0) && (num_grades < MAX_NUM_GRADES));
    


    // copmute statistics


    // output
    cout << "Grades before the facttor: " << endl;
    printGrades(grades, num_grades);


   /*
    factor(grades, num_grades, 60, 80, 0.05);
    cout << endl <<
     "Grades after the facttor: " << endl;
    printGrades(grades, num_grades);
    */
   cout << endl;
   cout << "Average = " << average(grades, num_grades) << endl;
   cout << "Standard deviation = " << stdDev(grades, num_grades) << endl;


    
    system("pause");
    return 0;
}

double average(double values[], int size)
{
    double sum = 0;
    for(int i = 0; i < size; i++)
    {
        sum +=  values[i] ;
    }
    return(sum / size);
}

double stdDev(double values[], int size)
{
    double avg = average(values, size);
    double sum_sqr = 0;
    for(int i = 0; i < size; i++)
    {
        sum_sqr +=  pow((values[i] - avg), 2)   ;
    }
    double std_dev = sqrt(sum_sqr / size);
    return std_dev;
}


void printGrades(double values[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << setw(WIDTH)  << values[i] ;
    }
}

void factor(double grades[], int size, 
    double min_grade, 
    double max_grade, 
    double factor_rate) // 0.05 = 5%
{
    for(int i = 0; i < size; i++)
    {
        if((min_grade <= grades[i]) && (grades[i] <= max_grade ))
        {
            double new_grade = grades[i] * (1 + factor_rate);
            grades[i] = new_grade;
        }
    }
}