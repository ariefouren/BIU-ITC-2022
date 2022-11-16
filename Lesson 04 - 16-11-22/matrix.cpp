#include <iostream>
#include <iomanip>      // std::setw()

using namespace std; 

int main()
{
    const int M = 4;
    const int N = 2;
    const int P = 3;
    const int WIDTH = 10; 

    double A[M][N] = {  {1, 2},
                        {3, 4}, 
                        {5, 6},
                        {7, 8}
    };

    double B[N][P] = {  {1,2,3}, 
                        {5,6,7}
    };

    double C[M][P];
    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < P; j++)
        {
            C[i][j] = 0;
            for(int k = 0; k < N; k ++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }


    // print matrices
    cout << "Matrix C:" << endl;
    for(int i = 0; i< M; i++)
    {
            for(int j = 0; j<P; j++)
            {
                cout << setw(WIDTH);  // set constant width     
                cout << C[i][j]; 
            }
            cout << endl;
    }
    cout << endl;

    cout << endl;
     
    system("pause");
    return 0;
}
