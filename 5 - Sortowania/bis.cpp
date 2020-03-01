#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    int l[n];
    int *w = &l[0];
    for(int i = 0; i < n; i++)
        cin >> *(w+i);

    int t; cin >> t;
    while(t--){
        int i = 2;
        int a; cin >> a;

        int index = max(1, int(n/i));
        while(true){
            i *= 2;

            if (*(w+index) == a){
                cout << index << endl;
                break;
            }

            index += max(1, int(n/i)) * ((*(w+index) < a) ? 1 : -1);

            if (*(w+index) < a && a < *(w+index+1)){
                cout << "X" << endl;
                break;
            }
        }
    }
    return 0;
}