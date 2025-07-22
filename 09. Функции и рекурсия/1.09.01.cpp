#include <iostream>

using namespace std;

// Создаю 2 функции. В 1 (min) возвращаю наименьшее число из 2 целых.
// Во 2 (min4) возвращаю наименьшее из 4 целых используя первую функцию.
// В главной функции main создаю 4 целочисленных переменных a, b, c, d
// С клавиатуры ввожу им значения
// Вывожу на экран результат функции по нахождению минимального из 4 min4, в качестве аргументов использую a, b, c, d

int min(int a, int b){
    if(a>=b){
        return b;
    }
    else{
        return a;
    }
}

int min4(int a, int b, int c, int d){
    return min(min(a,b),min(c,d));
}

int main() {
  int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << min4(a, b, c ,d);
  return 0;
}
