#include <bits/stdc++.h>

using namespace std;


struct dude{
    dude(int v, int i){
        value = v;
        index = i;
    }
    int value;
    int index;
    int score = 0;
};


bool dudes_sort_val(const dude &a, const dude &b){
    return a.value < b.value;
}

bool dudes_sort_index(const dude &a, const dude &b){
    return a.index < b.index;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<int> schodki;
    int maksymalny = 0;
    for (int i = 0; i < n; i++){
        int a; cin >> a;

        if (a > maksymalny){
            schodki.push_back(i);
            schodki.push_back(a);
            maksymalny = a;
        }
        
    }

    schodki.push_back(n);

    vector<dude> dudes;
    for(int i = 0; i < m; i++){
        int a; cin >> a;
        dude x = dude(a, i);
        dudes.push_back(x);
    }

    sort(dudes.begin(), dudes.end(), dudes_sort_val);

    int prev = 1;
    for(int i = 0; i < m; i++){
        if(dudes[i].value > maksymalny){
            dudes[i].score = n;
        }
        else{
            for(int j = prev; j < schodki.size()-1; j += 2){
                if(dudes[i].value <= schodki[j]){
                    dudes[i].score = schodki[j-1];
                    prev = j;
                    break;
                }
            }
        }        
    }

    sort(dudes.begin(), dudes.end(), dudes_sort_index);

    for(dude a: dudes){
        printf("%i ", a.score);
    }

    return 0;
}