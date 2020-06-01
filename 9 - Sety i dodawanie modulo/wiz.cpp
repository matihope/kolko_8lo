#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

struct tester{
    ll target = 0;
    int index = 0;
    int answer = 0;
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> ciastkaInput(n);
    vector<int> ciastka;

    for (auto &e : ciastkaInput) {
        cin >> e;
    }

    for (auto &e : ciastkaInput) {
        int times;
        cin >> times;
        while (times--)
            ciastka.push_back(e);
    }
    sort(ciastka.begin(), ciastka.end());
    reverse(ciastka.begin(), ciastka.end());

    int tests;
    cin >> tests;

    vector<tester> t(tests);
    for (ll i = 0; i < tests; i++) {
        ll a;
        cin >> a;
        t[i].target = a; // Target value
        t[i].index = i; // Index
    }

    // Sorting by the value
    sort(t.begin(), t.end(), [](tester const &a, tester const &b) { return a.target < b.target; });

    int i = 0;
    ll suma = 0;
    for (auto &test : t) {
        while (suma < test.target) {
            suma += ciastka[i];
            i++;
        }
        test.answer = i; // Answer
    }

    // Sorting by the index
    sort(t.begin(), t.end(), [](tester const &a, tester const &b) { return a.index < b.index; });

    for (auto &test : t) {
        printf("%i\n", test.answer);
    }

    return 0;
}