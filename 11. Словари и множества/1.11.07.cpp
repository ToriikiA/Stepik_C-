// I'll be back...
//
// Я вернулся

#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <locale>
#include <ctype.h>

using namespace std;

// Комментарии допишу потом...
// В рамках решения этой задачи были проведены изыскания по работе со строками. Поверхностно изучены библиотеки locale и ctype.h
//
//

void split(string &in_str, char symb, vector<string> &out_str){
    int start, end = 0;
    while((start = in_str.find_first_not_of(symb, end)) != string::npos){
        end = in_str.find(symb, start);
        out_str.push_back(in_str.substr(start, end-start));
    }
}

int main() {
    int N, errors = 0;
    cin >> N >> ws;
    set<string> dict, low_dict;
    for(int i = 0; i < N;++i){
        string word;
        word.clear();
        cin >> word >> ws;
        dict.insert(word);
        locale loc;
        string low_word = "";
        for(auto x : word){
            low_word += tolower(x, loc);
        }
        low_dict.insert(low_word);
    }
    
    string hwork;
    getline(cin, hwork);
    if(hwork.empty()){
        cout << 0;
    }
    else{
        char space = ' ';
        vector<string> splitted_hwork;
        split(hwork, space, splitted_hwork);
        for(auto x : splitted_hwork){
            int caps = 0;
            for(int i = 0; i < x.size(); ++i){
                if(isupper(x[i])){
                    ++caps;
                }
            }
            if(caps != 1){
                ++errors;
            }
            else{
                if(dict.find(x) == dict.end() && caps == 1){
                    locale loc1;
                    string f_low_word = "";
                    for(auto y : x){
                        f_low_word += tolower(y, loc1);
                    }
                    if(low_dict.find(f_low_word) != low_dict.end()){
                        ++errors;
                    }
                }
            }
        }
        cout << errors;
    }
  return 0;
}
