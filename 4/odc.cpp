#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);

    int n; cin >> n;
    int liczby[n];
    for(int i = 0; i < n; i++)
        cin >> liczby[i];


    int highest_loss = 0;
    int current_loss = 0;
    for(int i = 1; i < n; i++){
        if(liczby[i-1] >= liczby[i]){
            current_loss += liczby[i-1] - liczby[i];
            highest_loss = max(highest_loss, current_loss);
        }
        else current_loss = 0;

    }

    cout << highest_loss << endl;

    return 0;
}