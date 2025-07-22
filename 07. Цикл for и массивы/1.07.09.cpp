#include <iostream>
#include <vector>

using namespace std;

// Объявляю целочисл. перем. n для хранения числа элем. массива, temp - для временного хранения числа. Объявляю массив типа int.
// Далее в 1 цикле for заполняю его и сразу же провожу замену элементов, если текущий индекс элемента четный.
// Затем во 2 цикле for вывожу все элементы массива. 

int main() {
  int n, temp;
    cin >> n;
  vector<int> a;
    for(int i = 0; i<n; ++i){
        cin >> temp;
        a.push_back(temp);
        if(i%2){
            temp = a[i-1];
            a[i-1] = a[i];
            a[i] = temp;
        }
    }
    for(auto q : a){
        cout << q << " ";
    }
  return 0;
}
