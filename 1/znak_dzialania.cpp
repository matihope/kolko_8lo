#include <bits/stdc++.h>

using namespace std;


struct operation{
    operation(long long aa, long long bb, long long e, long long mode){
        end = e;

        string a_ = to_string(aa), b_ = to_string(bb), e_ = to_string(end);
        if (aa < 0){
            a_ = "(" + to_string(aa) + ")";
        }
        if (bb < 0){
            b_ = "(" + to_string(bb) + ")";
        }
        if (end < 0){
            e_ = "(" + to_string(end) +")";
        }

        switch(mode){
            case 0:
                eq = a_ + "+" + b_ + "=" + e_;
                break;
            case 1:
                eq = a_ + "-" + b_ + "=" + e_;
                break;
            case 2:
                eq = a_ + "*" + b_ + "=" + e_;
                break;
        }
    }
    long long end;
    string eq;
};


bool my_sort(const operation& a, const operation& b){
    return (a.end > b.end);
}


int main()
{
    long long a, b;
    cin >> a >> b;

    string s_a = to_string(a), s_b = to_string(b);

    long long add = a + b, sub = a - b, mul = a * b;

    vector<operation> result{operation(a, b, add, 0), operation(a, b, sub, 1), operation(a, b, mul, 2)};
    sort(result.begin(), result.end(), my_sort);

    if (result[0].end != result[1].end) cout << result[0].eq << endl;
    else cout << "NIE" << endl;

    return 0;
}