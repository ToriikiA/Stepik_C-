#include <iostream>

using namespace std;

// До цикла печатаю изначальное число, а после это же число, помноженное на степень двойки.

int main() {
    int N, res = 1;
    cin >> N;
    cout << res << " ";
    while((res *= 2) <= N){
        cout << res << " ";
    }
  return 0;
}
