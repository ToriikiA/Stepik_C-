// I'll be back...
//
// Я вернулся.
//

#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

// Комментарий оставлю потом

int main() {
  int N;
    cin >> N;
    map<string, vector<string>> A;
    for(int i = 0; i < N; ++i){
        string latw, engw;
        cin >> engw >> latw;
        bool end = false;
        while(!end){
            cin >> latw;
            int last_index = latw.length() - 1;
            if(latw[last_index] == ','){
                latw = latw.erase(last_index);
            }
            else{
                end = true;
            }
            A[latw].push_back(engw);
        }
    }
    cout << A.size() << "\n";
    for(auto x : A){
        cout << x.first << " - ";
        for(int i = 0; i < x.second.size() - 1; ++i){
            cout << x.second[i] << ", ";
        }
        cout << x.second[x.second.size() - 1] << "\n";
    }
  return 0;
}
