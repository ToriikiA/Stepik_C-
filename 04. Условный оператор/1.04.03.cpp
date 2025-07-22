#include <iostream>

using namespace std;

// Сравниваем 3 числа, используя вложенные else if

int main() {
  int a, b, c;
    cin >> a >> b >> c;
    if (a < b){
        if (b > c){
            cout << b;
        }
        else{
            cout << c;
        }
    }
    else{
        if(a > c){
            cout << a;
        }
        else{
             cout << c;
        }
      }
  return 0;
}
