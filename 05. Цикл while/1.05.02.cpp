#include <iostream>

using namespace std;

// Этот алгоритм не оптимален, на самом деле перебор нужен от i до квадрата числа.

int main() {
  int N, i = 2;
    cin >> N;
    while(N%i!=0){
        ++i;
    }
    cout << i;
  return 0;
}
