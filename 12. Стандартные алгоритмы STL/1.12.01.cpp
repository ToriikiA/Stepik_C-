#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// Заполняю массив одномерный целочисленный массив, алгоритмом sort сортирую его, указывая на начало массива и на его конец.
// Циклом for вывожу отсортированный массив.

int main() {
  int n, temp;
    vector<int> A;
    cin >> n;
    while(n--){
        cin >> temp;
        A.push_back(temp);
    }
    sort(A.begin(), A.end());
    for(auto x : A){
        cout << x << " ";
    }
  return 0;
}
