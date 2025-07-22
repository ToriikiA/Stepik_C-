#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Прошлая программа была дополнена проверками.

int main() {
    double D, x1, x2;
      double a, b, c;
    cin >> a >> b >> c;
    // Проверка на бесконечное количество решений
    if(a == 0 && b == 0 && c == 0){
        cout << "3";
    }
    // Проверка на линейность уравнения
    else if(a == 0 && b != 0){
        cout << "1 " << -c/b;
    }
    // Проверка на уравнения типа const=y, т.е. без решений
    else if(a == 0 & b == 0 && c!=0){
        cout << "0";
    }
    // Кусок прошлой программы (дополнен выводом при отрицательном дискриминанте, уравнение по-прежнему в действительной плоскости.
        else{
        D = b * b - 4 * a * c;
        cout << fixed << setprecision(11);
        if(D > 0){
            x1 = (-b + sqrt(D))/(2 * a);
            x2 = (-b - sqrt(D))/(2 * a);
            cout << "2 ";
            if (x1 > x2){
                cout << x2 << " " << x1;
            }
            else{
                cout << x1 << " " << x2;
            }
        }
        else if(D == 0){
            x1 = -b/(2 * a);
            cout << "1 " << x1;
        }
        else{
            cout << "0";
        }
            }
  return 0;
}
