#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);

    int n; cin >> n;
    int liczby[n];
    for(int i = 0 ; i < n; i++){
        cin >> liczby[i];
    }

    for(int i = 0; i < n; i++){
        cout << liczby[i] << " ";
        i++;
    }

    cout << endl;

    for(int i = 1; i < n; i++){
        cout << liczby[i] << " ";
        i++;
    }

    return 0;
}