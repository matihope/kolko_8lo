#include <bits/stdc++.h>

using namespace std;

int main(){
    double ilosc_litrow, kula_size; cin >> ilosc_litrow >> kula_size;
    double max_num = 0;
    if (ilosc_litrow >= (kula_size + kula_size*2 + kula_size*4)) {
        max_num = max(max_num, (kula_size + kula_size*2 + kula_size*4));
    }
    if (ilosc_litrow >= (kula_size/2 + kula_size + kula_size*2)){
        max_num = max(max_num, (kula_size/2 + kula_size + kula_size*2));
    }
    if (ilosc_litrow >= (kula_size/4 + kula_size/2 + kula_size)){
        max_num =  max(max_num, (kula_size/4 + kula_size/2 + kula_size));
    }
    cout << (int)(max_num * 1000) << endl;
    return 0;
}