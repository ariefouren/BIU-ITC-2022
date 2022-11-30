#include <iostream>
#include <iomanip>      // std::setw()

using namespace std;

#define MAX_N 50
#define WIDTH 3


void computeModRelation(bool rel[MAX_N][MAX_N], int n, int m);
void printRelation(bool rel[MAX_N][MAX_N], int n);

bool isReflexive(bool rel[MAX_N][MAX_N], int n);

int main()
{
    
    bool modRelation[MAX_N][MAX_N];
    int n;
    int m;

    cout << "Enter n: ";
    cin >> n;

    cout << "Enter m: ";
    cin >> m;

    computeModRelation(modRelation, n, m);
    
    cout<< " relation mod " << m << " : " << endl;
    printRelation(modRelation, n);


    cout<< endl;
    cout << "Reflexive : " << isReflexive(modRelation, n) << endl;
     
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
    }
}

void printRelation(bool rel[MAX_N][MAX_N], int n)
{
    // print header

    cout << setw(WIDTH) << "";
    for(int i =0; i < n; i++)
    {
        cout << setw(WIDTH) << i; 
    }
    cout << endl;


    for(int i =0; i < n; i++)
    {
        cout << setw(WIDTH) << i; 
        for(int j = 0; j < n; j++)
        {
            cout << setw(WIDTH) << rel[i][j]; 
        }
        cout << endl;
    }
}

bool isReflexive(bool rel[MAX_N][MAX_N], int n)
{
    for(int i = 0; i< n; i++)
    {
        if( !rel[i][i]) return false;
    }
    return true;
}