#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    double x;
    double y;

    cout << "Введите число x: " << endl;
    cin >> x;
    cout << "Введите число y: " << endl;
    cin >> y;

    double result = sqrt(fabs(x - y)) / 3 * x;

    cout << "Результат: " << result << endl;

}


