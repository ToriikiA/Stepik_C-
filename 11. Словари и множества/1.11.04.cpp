#include <iostream>
#include <set>

using namespace std;

// Аналогично предыдущему заданию
// Отличия - нет счетчика, добавлено новое целочисленное множество unq2
// Во 2 цикле while, если элемент из 2 списка уже содержится в 1, то он попадает во множество unq2.
// После завершения 2 цикла while входим в цикл for и последовательно выводим элементы множества unq2 (они отсортированы по возрастанию);

int main() {
  int N, temp;
    set<int> unq, unq2;
    cin >> N;
    while(N--){
        cin >> temp;
        unq.insert(temp);
    }
    cin >> N;
    while(N--){
        cin >> temp;
        if(!unq.insert(temp).second){
            unq2.insert(temp);
        }
    }
    for(auto x : unq2){
        cout << x << " ";
    }
  return 0;
}
