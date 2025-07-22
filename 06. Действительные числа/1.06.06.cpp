#include <iostream>
#include <iomanip>

using namespace std;

// Объявляю и инициализирую res = 0 для суммирования чисел и вывода результата.
// В цикле while провожу суммирование и подсчет количества введенных чисел (в переменную cnt)
// При вводе 0 цикл завершается, производится расчет и вывод среднего значения.

int main() {
    double res = 0;
  int x, cnt = 0;
    cin >> x;
  while(x){
      res += x;
      cnt+=1;
      cin >> x;
  }
    res = res / cnt;
    cout << fixed << setprecision(11);
    cout << res;
  return 0;
}
