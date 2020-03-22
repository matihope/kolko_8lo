#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<string> strings;
    string s;

    do{
        cin >> s;
        strings.push_back(s);

    }while (s != "prrr");

    sort(strings.begin(), strings.end());

    int counter = 0;
    for(int i = 1; i <= strings.size(); i++){
        if (strings[i-1] != strings[i]) counter++;
    }

    cout << counter << endl;

    return 0;
}