#include <bits/stdc++.h>

using namespace std;


int main()
{
    double c, z, n;
    cin >> c >> z >> n;
    double s1, s2, s3, s4, s5, s6;
    cin >> s1 >> s2 >> s3 >> s4 >> s5 >> s6;

    double req_c, req_z, req_n;
    req_c = min(0.0, (c-(s5 + s4/2 + s6/2)));
    req_z = min(0.0, (z-(s1 + s2/2 + s6/2)));
    req_n = min(0.0, (n-(s2/2 + s3 + s4/2)));

    // really important step (apparently), otherwise it would print -0 (REALLY!)
    if(req_c != 0) req_c *= -1;
    if(req_z != 0) req_z *= -1;
    if(req_n != 0) req_n *= -1;

    if(round(req_c) == req_c) cout << to_string((int)req_c);
    else{
        printf("%.1f", req_c);
    }

    cout << " ";
    if(round(req_z) == req_z) cout << to_string((int)req_z);
    else{
        printf("%.1f", req_z);
    }
    
    cout << " ";
    if(round(req_n) == req_n) cout << to_string((int)req_n);
    else{
        printf("%.1f", req_n);
    }

    cout << endl;

    return 0;
}