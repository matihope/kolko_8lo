#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    int c;
    cin >> c;

    int l[c];
    for (int i = 0; i < c; i++)
        cin >> l[i];

    sort(l, l+c);

    bool git = true;
    for (int i = 0; i < c; i++)
        if (l[i] != i + 1)
            git = false;

    cout << (git ? "TAK" : "NIE") << endl;
}