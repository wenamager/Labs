#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    setlocale(LC_ALL, "ru");
    double x, y, z, result;

    cout << "Введите число x: ";
    cin >> x;
    cout << "Введите число y: ";
    cin >> y;
    cout << "Введите число z: ";
    cin >> z;

    result = log(pow(y, -sqrt(fabs(x)))) * (x-y/2) + pow(sin(atan(z)), 2);

    cout << "Результат: " << result << endl;
}
