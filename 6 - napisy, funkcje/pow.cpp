#include <bits/stdc++.h>

using namespace std;

int main(){
    string s, answer = "";
    cin >> s;
    char before;
    for(char c: s){
        if(c != before){
            answer += c;
        }
        before = c;
    }

    cout << answer << endl;

    return 0;
}