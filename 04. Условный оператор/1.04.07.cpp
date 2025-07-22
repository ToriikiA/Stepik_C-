#include <iostream>

using namespace std;

// Король может пойти на клетку, если разница в координатах клетки не больше 1.

int main() {
  int a, b, c, d;
    cin >> a >> b >> c >> d;
    if ((a - c == 1) || (c - a == 1) || (a - c == 0)){
        if ((b - d == 1) || (d - b == 1) || (b - d == 0)){
            cout << "YES";
        }
        else{
            cout << "NO";
        }
    }
    else{
        cout << "NO";
    }
  return 0;
}
