#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int v, e, i, a, b, counter = 0;
    cin >> v >> e;
    vector<int> wyspy(v, 0);

    for (i = 0; i < e; ++i){
        cin >> a >> b;
        wyspy[a-1]++;
        wyspy[b-1]++;
    }

    for(auto& wys : wyspy){
        if (wys < 2){
            counter++;
        }
    }

    cout << counter << endl;
}