#include <iostream>
#include <math.h>

using namespace std;


int main()
{
    setlocale(LC_ALL, "ru");
    double x, y, z;

    cout << "Введите число x: " << endl;
    cin >> x;
    cout << "Введите число y: " << endl;
    cin >> y;
    cout << "Введите число z: " << endl;
    cin >> z;

    double result = log(pow(y, -sqrt(fabs(x)))) * (x-y/2) + pow(sin(atan(z)), 2);

    cout << "Результат: " << result << endl;
}
