#include <iostream>
#include <iomanip>      // std::setw()

using namespace std;

#define MAX_N 50
#define WIDTH 2


void computeModRelation(bool rel[MAX_N][MAX_N], int n, int m);
void printRelation(bool rel[MAX_N][MAX_N], int n);

int main()
{
    
    bool modRelation[MAX_N][MAX_N];
    int n;
    int m;

    cout << "Enter n: ";
    cin >> n;

    cout << "Enter m: ";
    cin >> m;



     
    system("pause");
    return 0;
}

void computeModRelation(bool rel[MAX_N][MAX_N], int n, int m)
{
    for(int i =0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            rel[i][j] = (((j - i) % m) == 0 ); 
        }
        cout << endl;
    }
}

void printRelation(bool rel[MAX_N][MAX_N], int n)
{
     for(int i =0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << setw(WIDTH) << rel[i][j]; 
        }
    }
}