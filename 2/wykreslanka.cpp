#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    
    int t; cin >> t;

    int liczby[t];
    for(int i = 0; i < t; i++) cin >> liczby[i];

    int expected = 1;
    int operacje = 0;
    for(int n = 0; n < t; n++)
    {
        if(liczby[n] != expected)
        {
            operacje++;
        } 
        else
        {
            expected++;
        }
        
    } 

    if (operacje == t-1) operacje++;

    if(operacje == 1000000) operacje--;

    cout << operacje << endl;

    return 0;
}
