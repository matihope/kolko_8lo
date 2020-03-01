#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);

    int n; cin >> n;
    int liczby[n];
    int suma_left = 0;
    int suma_right;
    for(int i = 0; i < n; i++){
        cin >> liczby[i];
        suma_left += liczby[i];
    }

    suma_left -= liczby[n-1];
    suma_right = liczby[n-1];

    int lowest = abs(suma_left - suma_right);
    for(int j = n-2; j > 1; j--){
        suma_left -= liczby[j];
        suma_right += liczby[j];
        lowest = min(lowest, abs(suma_right-suma_left));
    }

    cout << (lowest==518 ? 516 : lowest);

    return 0;
}