
#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    setlocale(LC_ALL, "ru");
    int alpha;


    cout << "Введите угол альфа: ";
    cin >> alpha;

    double z1 = 1 - 1.0/4.0 * pow(sin(2 * alpha), 2) + cos(2 * alpha);
    double z2 = pow(cos(alpha), 2) + pow(cos(alpha), 4);

    cout << "Результат z1: " << z1 << "\nРезультат z2: " << z2 << endl;
}


