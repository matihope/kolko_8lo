#include <iostream>
#include <set>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n, m, a, mx = 0, curr = 0;
    cin >> n >> m;
    long long lst[200000] = {};
    long long prefix[200001] = {};

    set<long long> mods;
    set<long long>::iterator it;
    mods.insert(0);

    for (int i = 0; i < n; ++i){
        cin >> a;
        lst[i] = a;
        prefix[i+1] = ((prefix[i] % m) + (a % m)) % m;
        if (prefix[i+1] < 0)
            prefix[i+1] += m;
    }

    for (int i = 1; i < n+1; ++i){
        it = mods.upper_bound(prefix[i]);
        
        if (it != mods.end()){
            curr = m - ((*it) - prefix[i]);
            if (curr > mx)
                mx = curr;
        }

        if (prefix[i] > mx){
            mx = prefix[i];
        }

        mods.insert(prefix[i]);
    }


    cout << mx << endl;
}