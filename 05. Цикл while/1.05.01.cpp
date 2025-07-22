#include <iostream>

using namespace std;

// Выводим квадраты до тех пор, пока они не начнут превышать заданное число.

int main() {
  int N, sq = 0, i = 1;
    cin >> N;
    while ((sq = i * i) <= N){
        cout << sq << " ";
        ++i;
            
    }
  return 0;
}
