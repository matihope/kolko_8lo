#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    string s[n];
    int shortest = 0;
    int longest = 0;
    for(int i = 0; i < n; i++){
        cin >> s[i];
        shortest = min(shortest, int(s[i].length()));
        longest = max(longest, int(s[i].length()));
    }

    for(int len = shortest; len <= longest; len++){
        vector<string> strings_of_len;
        for(int i = 0; i < n; i++){
            if (s[i].length() == len) {
                strings_of_len.push_back(s[i]);
            }
        }

        sort(strings_of_len.begin(), strings_of_len.end());

        for(string t: strings_of_len){
            cout << t << endl;
        }
    }

    return 0;
}