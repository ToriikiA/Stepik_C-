#include <iostream>

using namespace std;

// Выполняется одновременная проверка 2 координат: клетки начала и клетки конца.

int main() {
  int a, b, c, d;
    cin >> a >> b >> c >> d;
    if ((a == c) || (b == d)){
        cout << "YES";
    } 
    else{
        cout << "NO";
    }
  return 0;
}
