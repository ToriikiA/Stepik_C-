#include <iostream>

using namespace std;

// Для начала нужно убедиться, что N - длинная сторона, а M - короткая.
// Затем проверяю 4 случая и выбираю подходящий. Если стороны в другом порядке - N - короткая, M - длинная, то меняю их местами и повторяю проверку
//

int main(){
    int N, M, X, Y, temp;
    cin >> N >> M >> X >> Y;
    if (N > M){
        if ((X < M - X) && (X < N - Y) && (X < Y)){
            cout << X;
        }
        else if ((M - X < X) && (M - X < N - Y) && (M - X < Y)){
            cout << M - X;
        }
        else if ((Y < X) && (Y < M - X) && (Y < N - Y)){
            cout << Y;
        }
        else{
            cout << N - Y;
        }
    }
    else{
        temp = N;
        N = M;
        M = temp;
        if ((X < M - X) && (X < N - Y) && (X < Y)){
            cout << X;
        }
        else if ((M - X < X) && (M - X < N - Y) && (M - X < Y)){
            cout << M - X;
        }
        else if ((Y < X) && (Y < M - X) && (Y < N - Y)){
            cout << Y;
        }
        else{
            cout << N - Y;
        }
    }
    return 0;
}
