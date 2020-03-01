#include <bits/stdc++.h>

using namespace std;

struct kabel{
    kabel(int w, int n){
        wyt = w;
        nap = n;
        ratio = wyt-nap;
    }
    int wyt; // wytrzymalosc
    int nap; // napiecie
    int ratio = 0;
};


bool my_ratio_sort(const kabel &a, const kabel &b){
    return a.ratio > b.ratio;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;

    int ilosc_kabli = 0;
    long long suma = 0; // suma wytrzymalosc-napiecie

    vector<kabel> kable;
    for(int i = 0; i < n; ++i){
        int a, b;
        cin >> a >> b;

        if(a >= b){ 
            // napiecie mniejsze niz wtrzymalosc
            suma += (a-b);
            ilosc_kabli++;
        }

        else
            kable.push_back(kabel(a, b)); //trzeba posortowac i zobaczyc, ktore sie nadaja
    }

    sort(kable.begin(), kable.end(), my_ratio_sort);


    for(kabel k: kable){
        if(suma + k.ratio >= 0){
            suma += k.ratio;
            ilosc_kabli++;
        }
        else break;
    }

    printf("%i", ilosc_kabli);

    return 0;
}