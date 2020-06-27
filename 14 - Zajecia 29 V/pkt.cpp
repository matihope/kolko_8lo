#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<string> map(n);
    for (auto& s : map){
        cin >> s;
    }
    int counter = 0;
    vector<vector<bool>> map_static(n, vector<bool>(m, false));
    for (int i = n-1; i >= 0; --i){
        for (int j = m-1; j >= 0; --j){
            if (map[i][j] == 'X' || map_static[i][j]){
                if (i-1 >= 0)
                    map_static[i-1][j] = true;
                if (j-1 >= 0)
                    map_static[i][j-1] = true;
            }
            if (map[i][j] == 'X' && !map_static[i][j]){
                counter++;
            }
        }
    }
    cout << counter << endl;
}