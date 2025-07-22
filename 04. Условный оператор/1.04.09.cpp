#include <iostream>

using namespace std;

// Для ферзя достаточно совместить решения для слона и ладьи

int main() {
  int a, b, c, d;
    cin >> a >> b >> c >> d;
    if ((((a - c) == (b - d)) || ((c - a) == (b - d)) || ((a - c) == (d - b)) || ((c - a) == (d - b))) || ((a == c) || (b == d))){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
  return 0;
}
