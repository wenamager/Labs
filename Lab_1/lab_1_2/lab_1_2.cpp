

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    double x;
    const int A = 15;
    const int B = 7;
    const int C = 27;

    cout << "Введите число x: " << endl;
    cin >> x;

    double result = pow(x, 2) - A * x + B - C;

    cout << "Результат: " << result << endl;
}
