
#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    setlocale(LC_ALL, "ru");
    double a, b, h;

    cout << "Введите сторону a: ";
    cin >> a;
    cout << "Введите сторону b: ";
    cin >> b;
    cout << "Введите высоту (h): ";
    cin >> h;

    double S = 0.5 * (a + b) * h;

    cout << "Площадь трапеции: " << S << endl;
}


