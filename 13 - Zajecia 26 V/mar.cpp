#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, size = 1, prev_counter = 0, counter = 0, i, j;
    cin >> n >> m;
    string line;

    vector<vector<bool>> v1(n, vector<bool>(m, false));
    vector<vector<bool>> v2(n-1, vector<bool>(m-1, false));

    for (i = 0; i < n; ++i){
        cin >> line;
        for (j = 0; j < m; ++j){
            if (line[j] == '.')
                v1[i][j] = true;
        }
    }

    while(1){
        counter = 0;
        for (i = 0; i < n-1; ++i){
            for (j = 0; j < m-1; ++j){
                if (v1[i][j] && v1[i+1][j] && v1[i][j+1] && v1[i+1][j+1]){
                    v2[i][j] = true;
                    counter++;
                }
            }
        }

        if (counter == 0){
            if (size == 1){
                for (i = 0; i < n; i++)
                    for (j = 0; j < m; j++)
                        if (v1[i][j])
                            counter++;
                prev_counter = counter;
            }
            cout << size << " " << prev_counter << endl;
            break;
        }
        v1 = v2;
        v2 = vector<vector<bool>>(--n, vector<bool>(--m, false));
        prev_counter = counter;
        size++;
    }

    return 0;
}