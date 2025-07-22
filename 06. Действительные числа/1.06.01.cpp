#include <iostream>

using namespace std;

// При приведении к int вещественная часть отбрасывается. В дальнейших комментариях не нуждается... 

int main() {
  double x;
    cin >> x;
    cout << x - (int)x;
  return 0;
}
