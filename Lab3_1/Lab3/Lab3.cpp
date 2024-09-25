#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    double x, y, f, a, r, v;
    int p;
    cout << "Введите x: ";
    cin >> x;
    cout << "Введите y: ";
    cin >> y;
    cout << "Меню:\n1 - рассчитать sh(x)\n2 - рассчитать x^2\n3 - рассчитать e^x" << endl;
    cin >> p;
    switch (p) {
    case 1:
        f = sinh(x);
        break;
    case 2:
        f = pow(x, 2);
        break;
    case 3:
        f = exp(x);
        break;
    default:
        cout << "Такого пункта нет!" << endl;
        return 0;
    }
    cout << "f(x) = " << f << endl;
    a = fabs(x * y);
    cout << "|x*y| = " << a << endl;
    if (x > y) {
        v = 1;
        r = pow(sqrt(fabs(f - y)), 3) + tan(f);
    }
    else if(y < x) {
        v = 2;
        r = pow((y - f), 3) + cos(f);
    }
    else {
        v = 3;
        r = pow((f + y), 2) + pow(x, 3);
    }
    cout << "Результат вычислений по ветке " << v << ": " << r << endl;
    system("pause");
    return 0;
}

