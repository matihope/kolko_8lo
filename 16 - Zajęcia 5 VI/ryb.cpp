#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, i = 0;
    cin >> n;

    vector<int> rybki(n);
    vector<int> kier(n);

    for (auto& rybka : rybki)
        cin >> rybka;

    for (auto& kierunek : kier)
        cin >> kierunek;

    while (1){
        // fiding place, where 1 meets 0 (or vice versa)
        i = 0;
        while (!(kier[i] == 1 && kier[i+1] == 0)){
            i++;
            if(i == n){
                cout << n << endl;
                return 0;
            }
        }
        // simulating a fight
        while(i+1 < n && kier[i] != kier[i+1]){
            if (rybki[i] < rybki[i+1]){
                rybki.erase(rybki.begin()+i);
                kier.erase(kier.begin()+i);
                n--;
                break;
            }
            else{
                rybki.erase(rybki.begin()+i+1);
                kier.erase(kier.begin()+i+1);
                n--;
            }
        }
        
    }
    cout << i << endl;
}