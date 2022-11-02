#include <iostream>
#include <string>

using namespace std; 

int main()
{
    string firstName, lastName;
    string greeting;

    cout << "Enter your first name : ";
    cin >> firstName;

    cout << "Enter your last name : ";
    cin >> lastName;

    greeting = "Hi, " + firstName + " " + lastName + " :)";
    cout << greeting << endl;



    system("pause");
    return 0;
}