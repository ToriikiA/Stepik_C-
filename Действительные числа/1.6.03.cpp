#include <iostream>
#include <cmath>

using namespace std;

// Для вычисления площади треугольника по всем сторонам используется формула Герона. Также была подключена стандартная математическая библиотека и использована функция квадрата числа sqrt.

int main() {
  double a,b,c,p;
    cin >> a >> b >> c;
    p = (a + b + c) / 2;
    cout << sqrt(p * (p - a) * (p - b) * (p - c));
  return 0;
}
