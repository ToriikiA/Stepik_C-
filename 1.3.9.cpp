#include <iostream>

using namespace std;

int main() {
    int a, b, n;
    cin >> a >> b >> n;
    b = b * n;
    cout << a * n + b / 100 << " " << b % 100;
    return 0;
}
