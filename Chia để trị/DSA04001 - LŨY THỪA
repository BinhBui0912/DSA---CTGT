#include<bits/stdc++.h>

using namespace std;

using ll = long long;
const int mod = 1000000007;

ll binpow(ll a, ll b){
	ll res = 1;
	while(b != 0){
		if(b % 2 == 1){
			res *= a;
			res %= mod;
		}
		a *= a;
		a %= mod;
		b /= 2;
	}
	return res % mod;
}

int main(){
	int t; cin >> t;
	while(t--){
		ll a, b;
		cin >> a >> b;
		cout << binpow(a,b) << endl;
	}
}
