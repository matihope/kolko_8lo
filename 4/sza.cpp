#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);

    int n; cin >> n;
    int uczniowie[n];
    int suma = 0;
    for(int i = 0 ; i < n; i++){
        int a; cin >> a;
        suma += a;
        uczniowie[i] = a;
    }

    double srednia_wyskosc = (double)suma/(double)n;

    sort(uczniowie, uczniowie + n);

    cout << int(srednia_wyskosc) << "\n";
    cout << (uczniowie[n/2] > srednia_wyskosc ? "TAK" : "NIE");
    
    return 0;
}