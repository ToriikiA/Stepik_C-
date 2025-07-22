#include <iostream>

using namespace std;

// В цикле while прогоняю степени 2, пока они не превышают заданное число. Если сравнение успешно, то вывожу да, иначе, при выходе из цикла, вывожу нет.

int main() {
    int N, pow2 = 1, flag = 0;
    cin >> N;
    while(N >= pow2){
        if(pow2 == N){
            cout << "YES";
            flag = 1;
        }
        pow2 *= 2;
    }
    if (!flag)
        cout << "NO";
    return 0;
}
