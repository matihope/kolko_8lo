#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);

    int t; cin >> t;

    vector<int> szczyty;
    for(int i = 0; i < t; i++){
        int a = 0; cin >> a;
        szczyty.push_back(a);
    }

    int count = 0;
    for(int i = 1; i < t-1; i++){
        if ((szczyty[i-1] < szczyty[i]) && (szczyty[i] > szczyty[i+1])){
            count++;
        }
    }
    cout << count;

    return 0;
}