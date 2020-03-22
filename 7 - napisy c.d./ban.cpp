#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    vector<int> goscie;
    for(int i = 0; i < n; ++i){
        int g; cin >> g;
        goscie.push_back(g);
    }
    int ilosc_stolow = 0;
    vector<int> stolik;
    int i = 0;
    stolik.push_back(goscie[0]);
    goscie[0] = 0;
    while(true){
        stolik.push_back(goscie[stolik[stolik.size()-1] - 1]);
        goscie[stolik[stolik.size() - 2] - 1] = 0;
        if(stolik[stolik.size()-1] == 0){
            ilosc_stolow++;
            while(goscie[i] == 0){
                i++;
                if(i >= goscie.size()){
                    cout << ilosc_stolow << endl;
                    return 0;
                }
            }
            stolik.clear();
            stolik.push_back(goscie[i]);
            goscie[i] = 0;
        }
    }
    return 0;
}