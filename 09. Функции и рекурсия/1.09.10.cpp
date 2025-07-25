#include <iostream>

using namespace std;

// Задача похожа на уже решенную ранее. Произошли небольшие изменения: теперь степень всегданеотрицательная + появилась ускоренная обработка для четных степеней.

double power(double a, int n){
    if(n == 0){
        return 1;
    }
    else{
        if(n%2){
            return a * power(a, n - 1);
        }
        else{
            return power(a*a, n/2);
        }
    }
}

int main() {
  double a;
    int n;
    cin >> a >> n;
    cout << power(a, n);
  return 0;
}
