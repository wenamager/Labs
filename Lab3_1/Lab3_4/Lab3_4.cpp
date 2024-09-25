#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    double x,y,z,r;
    bool not_allowed;
    do  {
        not_allowed = false;
        cout << "Введите число x: ";
        cin >> x;
        cout << "Введите число y: ";
        cin >> y;
        cout << "Введите число z: ";
        cin >> z;
        if (x > 100 or y > 100 or z > 100) {
            cout << "Максимальное значение: 100. Введите числа заново." << endl;
            not_allowed = true;
        }
        
    } while (not_allowed);
    r = max(min(x, y), z) / 3;
    cout << "Результат: " << r << endl;
}


