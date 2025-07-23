#include <iostream>
#include <set>

using namespace std;

// Задача аналогична предыдущей
// Отличие: создается целочисленный счетчик cnt = 0;
// Сначала множество заполняется в цикле while по первому списку элементов
// Затем в другом цикле while пытаемся заполнить множество вторым списком элементов. Если элемент не удается вставить (он уже в множестве), то прибавляем к cnt 1;
// После выхода из цикла вывожу на экран cnt - количество одинаковых элементов в 2 списках.

int main() {
  int N, temp, cnt = 0;
    set<int> unq;
    cin >> N;
    while(N--){
        cin >> temp;
        unq.insert(temp);
    }
    cin >> N;
    while(N--){
        cin >> temp;
        if(!unq.insert(temp).second){
            ++cnt;
        }
    }
    cout << cnt;
  return 0;
}
