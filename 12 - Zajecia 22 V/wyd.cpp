#include <iostream>
#include <vector>
#include <algorithm>

typedef long long ll;

int main(){
    ll n, m; // n - dlugosc wycieczki, m - ilosc uczestnikow
    std::cin >> n >> m;

    // bajtazar$$$ = pieniadze % liczba_uczestnikow

    ll suma = 0;
    ll money[200000];
    for (size_t i = 0; i < n; i++){
        ll a;
        std::cin >> a; 
        money[i] = a % m;
    }


}