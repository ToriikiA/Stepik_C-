#include <iostream>

using namespace std;

// Используется конструкция иначе-если

int main() {
  int a, b;
  cin >> a >> b;
    if (a > b){
        cout << "1";
    }
    else if (b > a){
        cout << "2";
    }
    else{
        cout << "0";
    }
  return 0;
}
