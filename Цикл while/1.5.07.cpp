#include <iostream>

using namespace std;

// См. предыдущую задачу. Вместо добавления числа выполняется проверка, если новое число больше, чем записанное, то происходит перезапись старого на большее.

int main() {
    int i, cnt = 0;
    cin >> i;
    while(i){
        if (cnt < i){
            cnt = i;
        }
        cin >> i;
    }
    cout << cnt;
  return 0;
}
