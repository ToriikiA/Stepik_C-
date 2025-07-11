#include <iostream>

using namespace std;

// См. предыдущий пример. Вместо добавления к счетчику 1 добавляю к нему считанное число.

int main() {
    int i, cnt = 0;
    cin >> i;
    while(i){
        cnt += i;
        cin >> i;
    }
    cout << cnt;
  return 0;
}
