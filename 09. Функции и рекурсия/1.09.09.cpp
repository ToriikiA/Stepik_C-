#include <iostream>

using namespace std;

// По большей части функция осталась та же, что и в предыдущей задаче
// Но есть изменения: функция типа void, ничего не возвращает.
// Вместо возвращения минимального делителя функция сразу выводит на экран простое это число или составное и после вывода завершается.

void IsPrime(int a, int i){
    if (i * i > a){
        cout << "YES";
        return;
    }
    else{
        if(a % i == 0){
            cout << "NO";
            return;
        }
        else{
            IsPrime(a, ++i);
        }
    }
}

int main() {
  int a;
    cin >> a;
    IsPrime(a, 2);
  return 0;
}
