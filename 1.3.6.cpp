#include <iostream>

using namespace std;

int main() {
    int a, _1, _2, _3;
    cin >> a;
    _1 = a % 10;
     a = a / 10;
    _2 = a % 10;
     a = a / 10;
    _3 = a % 10;
    cout << _1 + _2 + _3;
    return 0;
}
