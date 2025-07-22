#include <iostream>

using namespace std;

// Чтобы слон мог ходить, нужно, чтобы изменения  координаты клеток по 2 осям были одинаковы

int main() {
  int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (((a - c) == (b - d)) || ((c - a) == (b - d)) || ((a - c) == (d - b)) || ((c - a) == (d - b))){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
  return 0;
}
