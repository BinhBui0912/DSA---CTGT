#include<bits/stdc++.h>

using namespace std;

using ll = long long;

int main(){
	int t; cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
		vector<int> ke[1001];
		for(int i = 1; i <= m; i++){
			int x, y; cin >> x >> y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		for(int i = 1; i <= n; i++){
			cout << i << ": ";
			for(auto it : ke[i]){
				cout << it << " ";
			}
			cout << endl;
		}
	}
}
