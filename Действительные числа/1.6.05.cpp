#include <iostream>

using namespace std;

// Смотри предыдущее задание. Основная трудность в подсчетах - точность типа double. В цикле выполняется начисление процентов.

int main() {
    double sum;
    int P, X, Y, K;
    cin >> P >> X >> Y >> K;
    sum = (double) X * 100 + Y;
    while(K--){
        sum = (int) (sum * (100 + P) / 100);
    }
  cout << (int) sum / 100 << " " << (int) sum % 100;
  return 0;
}
