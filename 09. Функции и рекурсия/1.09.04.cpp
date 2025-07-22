#include <iostream>
#include <cmath>


// Алгоритм такой же, как и в предыдущей задаче, меняется только формула:
// |x| + |y| <= 1

using namespace std;

bool IsPointInSquare(double x, double y){
    return (abs(x) + abs(y) <= 1);
}

int main() {
  double x, y;
    cin >> x >> y;
    if(IsPointInSquare(x, y)){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
  return 0;
}
