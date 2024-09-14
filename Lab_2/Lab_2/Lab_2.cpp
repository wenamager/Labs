
#include <iostream>
#include <math.h>

using namespace std;


int main()
{
    setlocale(LC_ALL, "ru");
    int alpha;


    cout << "Введите угол альфа: " << endl;
    cin >> alpha;

    double z1 = 1 - 0.25 * pow(sin(2 * alpha), 2) + cos(2 * alpha);
    double z2 = pow(cos(alpha), 2) + pow(cos(alpha), 4);

    cout << "Результат z1: " << z1 << endl;
    cout << "Результат z2: " << z2 << endl;
}


