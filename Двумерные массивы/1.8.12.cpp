#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

// iomanip и setw(4) см. 2 предыдущие задачи
// Создаю 4 переменных: n, m - для хранения размеров массива; cnt = 0 - счетчик для вставляемых в массив чисел; zero - переменная для хранения 0.
// Ввожу n, m.
// Создаю двумерный целочисленный массив A и приступаю к его заполнению двойным циклом for.
// Во вложенном цикле for выполняю проверку - если сумма индексов элемента четная, то вставляю в него cnt и прибавляю к cnt 1, иначе вставляю в элемент 0.
// После завершения заполнения вывожу полученный массив.

int main() {
  int n, m, cnt = 1, zero = 0;
  cin >> n >> m;
    vector<vector<int>> A;
    for(int i = 0; i < n; ++i){
        vector<int> temp_v;
        for(int j = 0; j < m; ++j){
            if((i + j)%2){
                temp_v.push_back(zero);
            }
            else{
                temp_v.push_back(cnt);
                ++cnt;
            }
        }
        A.push_back(temp_v);
    }
    
    for(auto x : A){
        for(auto y : x){
            cout << setw(4) << y;
        }
        cout << "\n";
    }
                
  return 0;
}
