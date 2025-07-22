#include <iostream>
#include <cmath>

using namespace std;

// Задача - комбинация предыдущих заданий;
// Используются глобальные переменные для написания уравнений: xc, yc - координаты центра окружности, r - ее радиус; b - свободный член линейной функции, k - тангенс угла, коэф. линейной функции y = kx + b;
// Используется 6 вспомогательных функций, т.к. условный оператор использовать по условиям задачи запрещено
// inCircle - выдает true, если точка лежит в окружности или на ее границе
// overLine1 - выдает true, если точка лежит над графиком функции y = kx + b;
// overLine2 - то же самое, но для k = -1 и b = 0;
// outCircle - выдает true, если точка лежит вне окружности или на ее границе;
// underLine1 - выдает true, если точка лежит под графиком функции y = kx + b;
// underLine2 - то же самое, но для k = -1 и b = 0;
// В функции IsPointInArea выполняется проверка условий попадания точки в области: если точка попадает в 3 области, описанные 3 первыми функциями (inCircle, overLine1, overLine2), или если точка попадает в 3 области, описанные 3 последними функциями (outCircle, underLine1, underLine2), то выдается true, иначе false
// В главной функции main пользователь вводит координаты и на выходе получает "YES", если точка попала в область, иначе "NO"

double xc = -1, yc = 1, r = 2, b = 2, k = 2;

bool inCircle(double x, double y){
    return sqrt(pow(x - xc, 2) + pow(y - yc, 2)) <= r;
}

bool overLine1(double x, double y){
    return y >= k*x + b;
}

bool overLine2(double x, double y){
    return y >= -x;
}

bool outCircle(double x, double y){
    return sqrt(pow(x - xc, 2) + pow(y - yc, 2)) >= r;
}

bool underLine1(double x, double y){
    return y <= k*x + b;
}

bool underLine2(double x, double y){
    return y <= -x;
}

bool IsPointInArea(double x, double y){
    return inCircle(x, y) && overLine1(x, y) && overLine2(x, y) || outCircle(x, y) && underLine1(x, y) && underLine2(x, y);
    }
    
    

int main() {
  double x, y;
   cin >> x >> y;
    if(IsPointInArea(x, y)){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
  return 0;
}
