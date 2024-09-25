#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    double a, b, c;
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;
    cout << "Введите третье число: ";
    cin >> c;

    if (a > 0) {
        a = pow(a, 2);
    }
    if (b > 0) {
        b = pow(b, 2);
    }
    if (c > 0) {
        c = pow(c, 2);
    }

    cout << "Результат:\nПервое число: " << a << endl << "Второе число: " << b << endl << "Третье число :" << c << endl;
}
