#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// Создаю булевую функцию IsPointInSquare, которая будет принимать 2 вещественных числа типа double (координаты точки) и выводить принадлежность точки к квадрату.
// Для выяснения принадлежности буду использовать формулу квадрата (a - длина стороны квадрата, x, y - координаты точки)
// |х+у|+|х-у|≤a
//
// В теле основной программы main создам 2 переменные x, y (координаты точки), в которые вложу значения с клавиатуры
// Установлю точность вывода до 13 знака включительно после запятой (вывод фиксирован)
// В условном операторе if буду выводить YES на экран, если функция IsPointInSquare с аргументами x, y возвращает true, иначе вывожу NO.

bool IsPointInSquare(double x, double y){
    return (abs(x + y) + abs(x - y) <= 2);
}
    


int main() {
    double x, y;
    cin >> x >> y;
    cout << fixed << setprecision(13);
    if(IsPointInSquare(x, y)){
        cout << "YES";
    }
       else{
           cout << "NO";
       }
  return 0;
}
