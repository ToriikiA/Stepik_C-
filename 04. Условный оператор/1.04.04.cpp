#include <iostream>

using namespace std;

// Для того, чтобы выпуклый треугольник существовал, нужно чтобы сумма любых 2 его сторон была больше третьей;

int main() {
  int a, b, c;
    cin >> a >> b >> c;
    if ((a + b > c) && (a + c > b) && (b + c > a)){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
  return 0;
}
