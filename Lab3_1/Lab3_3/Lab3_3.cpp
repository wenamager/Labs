#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    double y,x,z;
    cout << "Введите число z: ";
    cin >> z;

    if (z < -1) {
        x = -z / 3;
        y = log(x + 0.5) + (exp(x) - exp(-x));
        cout << "Резульат при z < -1: " << y << endl;
    }
    else {
        x = fabs(z);
        y = log(x + 0.5) + (exp(x) - exp(-x));
        cout << "Резульат при z >= -1: " << y << endl;
    }

}


