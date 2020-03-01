#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;

    int tab[t];
    int *w = &tab[0];
    for(int i = 0; i < t; i++)
        cin >> *(w+i);
        
    sort(w, w+t);

    int to_add = 0;
    // tworzenie pary wzór
    int expected = tab[0] + tab[t-1];

    for(int i = 1; i < t/2; i++){
        int x = (*(w+i) + *(w+t-1-i));
        if (x > expected){
            to_add += (x-expected) * i; 
            expected = x;
        }
        to_add += expected - x;
    }

    cout << to_add << endl;

    return 0;
}