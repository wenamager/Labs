
#include <iostream>
#include <math.h>

using namespace std;


int main()
{
    setlocale(LC_ALL, "ru");
    double a, b, h;

    cout << "Введите сторону a: " << endl;
    cin >> a;
    cout << "Введите сторону b: " << endl;
    cin >> b;
    cout << "Введите высоту (h): " << endl;
    cin >> h;

    double S = 0.5 * (a + b) * h;

    cout << "Площадь трапеции: " << S << endl;
}


