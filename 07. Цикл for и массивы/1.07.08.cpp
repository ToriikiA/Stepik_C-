#include <iostream>

using namespace std;

// Объявляю 4 целочисл. пер.: n - хранение кол-ва элем. массива, prev - предыдущее значение массива, cur - текущее, uniq - кол-во уникальных (иниц. 1, т.к.
// в массиве всегда есть 1 уникальный)
// До цикла for считываю число для n и cur. Далее в цикле for приравниваю prev к cur, считываю новый cur. Если cur отличен от prev, то прибавляю к счетчику uniq 1.
// После выхода из цикла вывожу uniq.

int main() {
  int n, prev, cur, uniq = 1;
    cin >> n >> cur;
    for(int i = 1; i < n; ++i){
        prev = cur;
        cin >> cur;
        if(cur!=prev){
            ++uniq;
        }
    }
    cout << uniq;
  return 0;
}
