#include <iostream>
#include <iomanip>
#include <ctime>
#include <cmath>
using namespace std;

int main()
{
    double r, x, y;
    srand(static_cast<unsigned>(time(nullptr)));

    for (int i = 0; i < 10; i++)
    {
        cout << "x = ";
        cin >> x;
        cout << "y = ";
        cin >> y;
        cout << "r = ";
        cin >> r;
        r = abs(r); // Перенесено сюди для оновлення значення r

        if ((x >= -2 * r) && (x <= 2 * r) && (y >= -2 * r) && (y <= 2 * r))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    cout << endl << fixed;

    for (int i = 0; i < 10; i++)
    {
        x = 6. * rand() / RAND_MAX - 3;
        y = 6. * rand() / RAND_MAX - 3;
        r = abs(r); // Оновлення r для другого циклу

        if ((x >= -2 * r) && (x <= 2 * r) && (y >= -2 * r) && (y <= 2 * r) && ((x >= 0) || (y >= 0)))
        {
            if ((x >= 0) && (abs(x) <= r) && (y >= 0) && (abs(y) <= r)) {
                cout << "Yes" << endl;
            }
            else if ((x <= 0) && (abs(x) <= r) && (y <= 0) && (abs(y) <= r)) {
                cout << "Yes" << endl;
            }
            else if ((x <= 0) && (abs(x) <= r) && (y >= 0) && (abs(y) <= r) && (y <= -1 * sqrt(pow(r, 2) - pow(x + r, 2)) + r)) {
                cout << "Yes" << endl;
            }
            else if ((x >= 0) && (abs(x) <= r) && (y <= 0) && (abs(y) <= r) && (y >= sqrt(pow(r, 2) - pow(x - r, 2)) - r)) {
                cout << "Yes" << endl;
            }
            else {
                cout << "No" << endl;
            }
        }
    }

    return 0;
}


