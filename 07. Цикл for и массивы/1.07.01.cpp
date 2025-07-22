#include <iostream>
#include <vector>

// Создаю целочисленную переменную n и записываю в нее число элементов в массиве
// Создаю массив целочисленных переменных a размером n
// Циклом for провожу запись значений
// Еще одним циклом for провожу выдачу значений четных индексов массива.

using namespace std;

int main() {
  int n;
    cin >> n;
    
    vector<int> a(n);

    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    for(int i = 0; i < n; i+=2){
        cout << a[i] << " ";
    }
  return 0;
}
