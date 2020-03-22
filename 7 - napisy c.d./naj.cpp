#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string a, b, c, d;
    cin >> a >> b;

    int m = min(a.length(), b.length());

    for(int len = m; len > 0; len--){
        for(int i = 0; i <= a.length()-len; i++){
            c = a.substr(i, len);
            for(int j = 0; j <= b.length()-len; j++){
                if(c == b.substr(j, len)){
                    cout << len << endl;
                    return 0;
                }
            }
        }
    }
    cout << 0 << endl;

    return 0;
}