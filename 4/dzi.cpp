#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    int t[n];
    for(int i = 0; i < n; i++)
        cin >> t[i];

    int head = 0;
    int tail = 0;
    int min_rem = n+1;
    int dzi = 0;
    if(t[0] == 0) dzi = 1;
    while(tail < n){
        while(dzi < k && head < n){
            head++;
            if(t[head] == 0){
                dzi++;
            }
        }
        if(dzi == k)
            min_rem = min(min_rem, head - tail + 1 - k);

        if(t[tail] == 0)
            dzi--;

        tail++;
    }

    if(min_rem != n+1){
        cout << min_rem << endl;
    }
    else cout << "NIE";

    return 0;
}