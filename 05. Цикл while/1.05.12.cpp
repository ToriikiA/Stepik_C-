#include <iostream>

using namespace std;

// Задаю 4 переменных: cur - для текущего числа, prev - для предыдущего, i - для текущего подсчета одинаковых чисел, j - для максимального подсчета одинаковых чисел.
// Считываю 1 число. Вхожу в цикл while, условием выполнения которого является введенное ненулевое число. В теле цикла приравниваю предыдущее значение к текущему
// Затем захожу во вложенный цикл while, который будет считывать новые значения введенных чисел и добавлять к счетчику i 1 до тех пор, пока значения предыдущего числа и текущего равны.
// После выхода из вложенного цикла сверяю значения текущего счетчика (i) и максимального (j), если текущий больше, то в максимальный записываю значение текущего. После сбрасываю значение текущего до нуля.
// После выхода из основного цикла вывожу значение максимального счетчика.

int main() {
    int cur, prev, i = 0, j = 0;
    cin >> cur;
    while (cur != 0){
        prev = cur;
        while(cur==prev){
            cin >> cur;
            ++i;
        }
        if (i > j){
            j = i;
        }
        i = 0;
    }
    cout << j;
    return 0;
}
