#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<char> chars;
    string combo = "";
    int counter = 0;
    int max_counter = 0;
    string curr;
    string copy;
    for(int i = 0; i < 1000; i++){
        counter = 0;        
        cin >> curr;
        copy = curr;
        sort(curr.begin(), curr.end());
        for(int j = 1; j < curr.length(); j++){
            if (curr[j-1] != curr[j])
                counter++;
        }
        if(counter > max_counter){
            combo = copy;
            max_counter = counter;
        }
    }

    cout << combo << " " << max_counter+1 << endl;

    return 0;
}