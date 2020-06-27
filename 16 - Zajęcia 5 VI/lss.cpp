#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a, b, e, max=0;
    cin >> e;

    vector<set<int>> v(10000);

    for (int i = 1; i <= e; ++i){
        cin >> a >> b;
        v[a].insert(b);

        if (a > max)
            max = a;
        if (b > max)
            max = b;
    }

    for (int i = 1; i <= max; ++i){
        printf("%i: ", i);

        for (set<int>::iterator it = v[i].begin(); it != v[i].end(); ++it)
            printf("%i,", *it);

        printf("\n");
    }
}