#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Приведен алгоритм нахождения корней квадратного уравнения (в действительной плоскости)
// В дальнейших комментариях не нуждается.

int main() {
    double D, x1, x2;
      double a, b, c;
    cin >> a >> b >> c;
    D = b * b - 4 * a * c;
    cout << fixed << setprecision(11);
    if(D > 0){
        x1 = (-b + sqrt(D))/(2 * a);
        x2 = (-b - sqrt(D))/(2 * a);
        if (x1 > x2){			// сортировка корней по возрастанию
            cout << x2 << " " << x1;
        }
        else{
            cout << x1 << " " << x2;
        }
    }
    else if(D == 0){
        x1 = -b/(2 * a);
        cout << x1;
    }
  return 0;
}
