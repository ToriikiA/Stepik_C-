#include <iostream>

using namespace std;

// Выполняется проверка 6 случаев (3!=6)

int main() {
  int a, b, c;
    cin >> a >> b >> c;
    if (a >= b && a >= c){
        if(b >= c){
            cout << c << " " << b<< " " << a;
        }
        else{
            cout << b << " " << c << " " << a;
        }
    }
    else if (b >= a && b >= c){
        if (a >= c){
            cout << c << " " << a << " " << b;
        }
        else{
             cout << a << " " << c << " " << b;
        }
    }
    else{
        if (a >= b){
             cout << b << " " << a << " " << c;
        }
        else{
            cout << a << " " << b << " " << c;
        }
    }
  return 0;
}
