#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

// Создаю структуру T для хранения координат точки и ее удаленности от центра.
// Создаю булевую функцию для сравнения структур по удаленности от центра по возрастанию
// В теле main создаю целочисленную переменную n для хранения количества точек
// Создаю структуру T для временного хранения координат и удаленности точки.
// Создаю массив структур A
// Ввожу n.
// В цикле while провожу заполнение массива
// После выхода из цикла, сортирую массив структур используя функцию-компаратор comp.
// Циклом for вывожу координаты точек в порядке возрастания удаленности от центра.

struct T{
    double x;
    double y;
    double r;
}

bool comp(T a, T b){
    return a.r <  b.r;
}

int main() {
    int n;
    T temp;
    vector<T> A;
    cin >> n;
    while(n--){
        cin >> temp.x >> temp.y;
        temp.r = sqrt(pow(temp.x,2) + pow(temp.y,2));
        A.push_back(temp);
    }
    sort(A.begin(), A.end(), comp);
    for(auto x : A){
        cout << x.x << " " << x.y << endl;
    }
  return 0;
}
