#include <bits/stdc++.h>

using namespace std;

int main(){
    int licznik = 1, mianownik = 1;

    int t; cin >> t;
    while(t--){
        int d_licz, d_mian; // d = dziecko
        cin >> d_licz >> d_mian;

        // converting the variables
        if(mianownik != d_mian){
            d_licz *= mianownik;
            licznik *= d_mian;
            mianownik *= d_mian;
        }

        // actual substracion
        licznik -= d_licz;

        if (licznik <= 0) 
            licznik = mianownik + (licznik % mianownik);

        //making the fraction smaller
        for(int i = 2; i <= mianownik; i++){
            if((licznik % i == 0) && (mianownik % i == 0)){
                licznik /= i;
                mianownik /= i;
                i = 1; // reset the loop
            }
        }
    }
    if(licznik == 0 || licznik == mianownik)    cout << 1 << endl;
    else    cout << licznik << "/" << mianownik << endl;
}