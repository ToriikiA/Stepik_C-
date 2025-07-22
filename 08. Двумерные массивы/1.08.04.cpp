#include <iostream>
#include <vector>

using namespace std;

// Создаю 5 целочисленных переменных: x, y - для хранения размеров массива; temp - для временного хранения числа; r1, r2 - для хранения индексов заменяемых друг на друга столбцов
// Создаю двумерный массив целых чисел A
// Заполняю x, y
// В цикле for и вложенном в него цикле for провожу заполнение массива A
// После выхода их цикла ввожу r1, r2
// После в еще одном цикле for последовательно произвожу замену элементов столбцов
// После замены В ЕЩЕ ОДНОМ ЦИКЛЕ for вывожу результат замены (массив с замененными столбцами)

int main() {
  int x, y, temp, r1, r2;
  vector<vector<int>> A;
  cin >> x >> y;
    for(int i = 0; i < x; ++i){
        vector<int> temp_v;
        for(int j = 0; j < y; ++j){
            cin >> temp;
            temp_v.push_back(temp);
        }
        A.push_back(temp_v);
    }
    cin >> r1 >> r2;
    for(int i = 0; i < x; ++i){
        temp = A[i][r1];
        A[i][r1] = A[i][r2];
        A[i][r2] = temp;
    }
    
    for(auto x : A){
        for(auto y : x){
            cout << y << " ";
        }
        cout << "\n";
    }
  return 0;
}
