#include <iostream>

using namespace std;

// До цикла считываю число, при входе проверяю не нулевое ли оно. В теле цикла, если число равно максимальному, то добавляю в счетчик 1. Если число больше максимального, то обновляю максимальное на считанное. В конце тела считываю новое число. После выхода из цикла вывожу значение счетчика. 

int main() {
    int i, max = 0, cnt = 0;
    cin >> i;
    while(i){
        if (i == max){
            ++cnt;
        }
        if (i > max){
            max = i;
            cnt = 1;
        }
        cin >> i;
    }
    cout << cnt;
  return 0;
}
