#include <iostream>

using namespace std;

int main() {
    int a, hours, minutes_1, minutes_2, seconds_1, seconds_2;
    cin >> a;
    seconds_2 = (a % 60) / 10;
    seconds_1 = a % 10;
    minutes_2 = (a / 60 % 60) / 10;
    minutes_1 = (a / 60 % 60) % 10;
    hours = a / 3600 % 24;
    cout << hours << ":" << minutes_2 << "" << minutes_1 << ":" << seconds_2 << "" << seconds_1;
    return 0;
}
