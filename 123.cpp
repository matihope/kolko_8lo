#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long liczba;
    cin >> liczba;

    string answer = "";
    while (liczba != 1){
        if (liczba % 2 == 0){
            answer += "L";
        }
        else
            answer += "P";
        liczba /= 2;
    }
    reverse(answer.begin(), answer.end());
    cout << answer << endl;
}