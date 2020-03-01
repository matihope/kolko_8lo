#include <bits/stdc++.h>


using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    
	int l_monet; cin >> l_monet;
	vector<int> monety;
	for(int i= 0; i < l_monet; i++){
		int a; cin >> a;
		monety.push_back(a);
	}
	int suma = 0;
	for(auto n: monety) suma += n;
	
	int do_rewersu = l_monet - suma;
	int do_awersu = suma;
	if(do_rewersu > do_awersu) cout << do_awersu;
	else cout << do_rewersu;
	return 0;
}