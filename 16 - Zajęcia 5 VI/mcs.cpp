#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int v, e, a, b;

    cin >> v >> e;

    vector<vector<bool>> macierz(v, vector<bool>(v));

    for (int i = 0; i < e; ++i){
        cin >> a >> b;
        macierz[a-1][b-1] = true;
        macierz[b-1][a-1] = true;
    }

    for (int i = 0; i < v; ++i){
        for (int j = 0; j < v; ++j){
            cout << macierz[i][j];
        }
        cout << endl;
    }
}