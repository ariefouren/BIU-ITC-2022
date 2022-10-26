#include <iostream>

using namespace std;

int main()
{
    double width, heigth, perimeter, area;

    cout << "Enter the width of the rectangle : ";
    cin >> width;
    
    cout << "Enter the height of the rectangle : ";
    cin >> heigth;

    perimeter = 2 * (width + heigth);
    area = width * heigth;

    cout << "Perimeter : " << perimeter << " Area : " << area << endl;



    system("pause");
    return 0;
}