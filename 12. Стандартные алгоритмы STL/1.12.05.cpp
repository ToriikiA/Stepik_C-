#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// Создаю структуру T для хранения сведений об ученике: surname, name - строковые переменные, хранящие в себе имя и фамилию;
// math, physics, cs, sum - вещественные переменные, хранящие в себе оценки и сумму оценок.
//
// Создаю функцию компаратор, сравнивающую суммы оценок двух учеников
//
// В теле функции main создаю целочисленную переменную n для хранения кол-ва учеников.
// Создаю временную структуру типа T для считывания данных
// Создаю массив структур T A.
// Кладу число в n.
// Циклом while заполняю массив и одновременно закладываю в ученика сумму его баллов.
// Командой stable_sort сортирую массив учеников.
// Циклом for вывожу фамилию и имя каждого ученика в очередности суммы баллов (по их убыванию).

struct T{
    string surname;
    string name;
    double math;
    double physics;
    double cs;
    double sum;
};

bool comp(T a, T b){
    return a.sum > b.sum;
}

int main() {
  int n;
  T temp;
  vector<T> A;
    cin >> n;
    while(n--){
        cin >> temp.name >> temp.surname;
        cin >> temp.math >> temp.physics >> temp.cs;
        temp.sum = temp.math + temp.physics + temp.cs;
        A.push_back(temp);
    }
    stable_sort(A.begin(), A.end(), comp);
    for(auto x : A){
        cout << x.name << " " << x.surname << endl;
    }
  return 0;
}
