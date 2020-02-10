#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    
    int t; cin >> t;

    int sz[t];
    for(int i = 0; i < t; i++) cin >> sz[i];

    int count = 0;
    for(int i = 1; i < t-1; i++)
    {
        if ((sz[i-1] < sz[i]) && (sz[i] > sz[i+1]))
        {
            count++;
        }
    }
    cout << count;

    return 0;
}