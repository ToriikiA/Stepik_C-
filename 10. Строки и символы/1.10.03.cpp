#include <iostream>

using namespace std;

// Похожа на предыдущую задачу, объяснений не требует.

int main() {
    char a;
    cin >> a;
      if('a' <= a && 'z' >= a){
          cout << char('A' + a - 'a');
      }
    else if('A' <= a && 'Z' >= a){
        cout << char('a' + a - 'A');
    }
    else{
        cout << a;
    }
  return 0;
}
