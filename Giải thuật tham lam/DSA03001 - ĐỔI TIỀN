#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int tien[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int cnt = 0;
		for(int i = 0; i < 10; i++){
			while(n >= tien[i] && n > 0){
				n -= tien[i];
				cnt++;
			}
		}
		cout << cnt << endl;
	}
}
