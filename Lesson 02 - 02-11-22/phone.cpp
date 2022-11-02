#include <iostream>

using namespace std;

int main()
{
    double xp, yp, x1, y1, x2, y2;
    // double xMin, xMax, yMin, yMax;

    cout << "Enter x y of the phone : ";
    cin >> xp >> yp;

    cout << "Enter x1 y1 x2 y2 of the building : ";
    cin >> x1 >> y1 >> x2 >> y2;

    if((x1<=xp) && (xp <= x2) && (y1 <= yp) && (yp <=y2))
    {
        cout << "The phone is INSIDE the building" << endl;
    }
    else
    {
        cout << "The phone is OURSIDE the building" << endl;
    }

    system("pause");
    return 0;
}