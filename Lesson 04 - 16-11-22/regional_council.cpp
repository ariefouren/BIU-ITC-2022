#include <iostream>
#include <iomanip>      // std::setw()
#include <string>
#include <cmath>        // sqrt(), pow()
using namespace std;

double distance(double x1, double y1, double x2, double y2);

int main()
{
    const int PRINT_WIDTH = 10;

    const int NUM_VILLAGES = 5;
    string villages[NUM_VILLAGES] = {"Gezer",   "Tapuach",  "Shezif",   "Petel",    "Gefen"};
    double xPos[NUM_VILLAGES]     = {100,       -100,       -100,       100,        0};
    double yPos[NUM_VILLAGES]     = {100,       100,        -100,       -100,       0};

    double dist[NUM_VILLAGES][NUM_VILLAGES];

    double maxDist = 0;
    int vill1, vill2;
    

    // calculate the distances between the villages
    for(int i =0; i < NUM_VILLAGES; i++)
    {
        for(int j = 0; j < NUM_VILLAGES; j++)
        {
            dist[i][j] = distance(xPos[i], yPos[i], xPos[j], yPos[j]); 
        }
    }

    // find the max distance
    for(int i =0; i < NUM_VILLAGES; i++)
    {
        for(int j = 0; j < NUM_VILLAGES; j++)
        {
           if(maxDist < dist[i][j])
           {
                maxDist = dist[i][j];
                vill1 = i;
                vill2 = j;
           }
        }
    }

    // print the matrix of the distances
    // print the header
    cout << setw(PRINT_WIDTH) <<" ";  
    for(int i =0; i < NUM_VILLAGES; i++)
    { 
        cout << setw(PRINT_WIDTH) << villages[i] ;
    }
    cout << endl;
    

    for(int i =0; i < NUM_VILLAGES; i++)
    {
        cout << setw(PRINT_WIDTH) << villages[i]; 
        for(int j = 0; j < NUM_VILLAGES; j++)
        {
            cout << setw(PRINT_WIDTH) <<dist[i][j] ;
        }
        cout << endl;
    }
    cout << endl;
    
    cout << "The farthest villages: " << villages[vill1] << " and " << villages[vill2] << endl;
    cout << "Max distancs : " << maxDist << endl;
    system("pause");
    return 0;
}


double distance(double x1, double y1, double x2, double y2)
{
    return(sqrt(pow(x2-x1, 2) + pow(y2 - y1, 2)));
}

