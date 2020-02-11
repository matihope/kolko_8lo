#include <bits/stdc++.h>

using namespace std;

int main()
{
    int licznik, mianownik;
    cin >> licznik >> mianownik;

    for(int i = 2; i <= mianownik; i++)
    {
        if((licznik % i == 0) && (mianownik % i == 0))
        {
            licznik /= i;
            mianownik /= i;
            i = 1; // reset the loop
        }
    }


    if(licznik == 0 || mianownik == licznik){
        cout << 1 << endl;
    }
    else{
        cout << licznik << "/" << mianownik << endl;
    }
    return 0;
}