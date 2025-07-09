#include <iostream>

using namespace std;

int main() {
    int n, n1, n2;
    cin >> n;
    n1 = n % 100;
    n2 = n / 100;
    cout << 1 + ((n1 % 10) * 10 + n1 / 10 - n2);
    return 0;
}
