#include <iostream>
#include <cmath>

// Решение аналогично предыдущим 2 задачам, изменена формула и количество переменных
// sqrt((x-xc)^2 + (y - yc)^2) <= r
// x,y - координаты точка; xc,yc - координаты центра окружности, r - радиус окружности

using namespace std;

bool IsPointInCircle(double x, double y, double xc, double yc, double r){
    return (sqrt(pow(x-xc, 2)+pow(y-yc, 2)) <= r);
}

int main() {
  double x, y, xc, yc, r;
    cin >> x >> y >> xc >> yc >> r;
    if(IsPointInCircle(x, y, xc, yc, r)){
        cout << "YES";
    }
       else{
           cout << "NO";
       }
  return 0;
}
