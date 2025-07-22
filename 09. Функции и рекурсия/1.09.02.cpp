#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// Подключаю 2 библиотеки: cmath - для использования функции квадратного корня sqrt и возведения в степень pow и iomanip - для указания точности вывода
// Создаю функцию distance с типом double, на вход которой подается 4 переменных типа double
// Функция возвращает расстояние между двумя точками, которые задаются координатами на входе функции.
//
// В главной функции main создаю 4 переменных типа double и заношу в них значения.
// Затем вывожу результат функции distance, на вход которой подаю ранее введенные значения. Фиксированный вывод осуществляется с точностью 13 знаков после запятой.

double distance(double x1, double y1, double x2, double y2){
    return sqrt(pow(x1-x2,2) + pow(y1-y2, 2));
}

int main() {
  double x1, y1, x2, y2;
   cin >> x1 >> y1 >> x2 >> y2;
    cout << fixed << setprecision(13) << distance(x1, y1, x2, y2);
  return 0;
}
