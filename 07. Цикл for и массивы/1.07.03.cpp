#include <iostream>

using namespace std;

// Создаю 3 челочисленных переменных: n - для хранения количества входных чисел,
// temp - для принятия числа с ввода и cnt = 0 для подсчета положительных чисел.
// Массив в этой задаче создавать не обязательно, числа можно не хранить.
// В цикле for считываю введенные числа и прибавляю к счетчику 1, если оно > 0.
// После выхода из цикла вывожу результат подсчета.

int main() {
  int n, temp, cnt = 0;
    cin >> n;
    for (int i = 0; i < n; ++i){
        cin >> temp;
        cnt += (temp > 0);
    }
    cout << cnt;
    
  return 0;
}
