#include <iostream>

using namespace std;

// Для коня нужно, чтобы одна из координат отличалась на 2, а вторая на 1

int main() {
  int a, b, c, d;
    cin >> a >> b >> c >> d;
    if ((((a - c)==2 || (c - a)==2) && ((b - d)==1 || (d - b)==1)) || (((a - c)==1 || (c - a)==1) && ((b - d)==2 || (d - b)==2))){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
  return 0;
}
