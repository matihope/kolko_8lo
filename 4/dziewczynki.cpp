#include <bits/stdc++.h>

using namespace std;


int main(){
    ios::sync_with_stdio(false);

    int in_row, demanded;
    cin >> in_row >> demanded;

    vector<int> row;
    for(int i = 0; i < in_row; i++){
        int a; cin >> a;

        if (a != 0){
            int counter = 0;
            do{
                counter++;
                i++;
                cin >> a;
            }while(a != 0 && i < in_row);

            row.push_back(counter);
            row.push_back(0);
        }
        else
            row.push_back(a);
    }

    vector<int> row_cp = row;

    sort(row_cp.begin(), row_cp.end());
    for(int i = 0; i < row_cp.size(); i++){
        if(row_cp[i] != 0){
            cout << row_cp[i] << endl;
            row_cp.erase(row_cp.begin() + i);
            i = -1;
        }
    }
    
    // do something with the list

    return 0;
}
