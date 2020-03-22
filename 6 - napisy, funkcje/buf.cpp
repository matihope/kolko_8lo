#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);

    int t; cin >> t;
    int b; cin >> b;
    int score = 0;
    while(t--){
        string a; 
        cin >> a;

        if(a.length() > b)
            score++;
    }

    printf("%i", score);

    return 0;
}