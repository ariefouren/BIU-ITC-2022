#include <iostream>
#include <iomanip>      // std::setw()

#define WIDTH 5
using namespace std; 

struct Node
{
    double grade;
    Node* next;
};

int main()
{
    Node* head = NULL;

    // get the list of grades
    double grade;
    cout << "Enter the list of grades ( -1 to finish) :" << endl;
    do
    {
        cin >> grade;
        if(grade >= 0) // the grade is correct
        {
            Node* newNode =new Node;
            newNode->grade = grade;
            newNode->next = head; 
            head = newNode; 
        }
    } while (grade >=0);

    // print the grades
    cout << "List of the grades: "; 
    Node* current = head;
    while(current != NULL)
    {
        cout << setw(WIDTH) << current->grade; 
        current = current->next;
    }

    system("pause");
    return 0;
}    
