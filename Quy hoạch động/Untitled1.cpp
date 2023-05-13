#include<bits/stdc++.h>
using namespace std;

int a[100][100], n, val = 0, parent[100];

void readFile()
{
	ifstream read("DT.INP");
	read >> n;
	for (int i = 1; i <= n; ++i)
{
		for (int j = 1; j <= n; ++j)
{
			read >> a[i][j];
		}
	}
	read.close();
}
void writeFile()
{
	ofstream write("DT.OUT");
	write << val << endl;
	for (int i = 1; i <= n; ++i)
{
		for (int j = 1; j <= n; ++j)
{
			write << a[i][j] << ' ';
		}
		write << endl;
	}
	write.close();
}
bool BFS(int s, int t)
{
	queue<int> q;
	q.push(s);
	vector<bool> chuaxet(100, true);
	chuaxet[s] = false;
	while (!q.empty()) {
		int u = q.front();
		q.pop();
		for (int i = 1; i <= n; ++i)
{
			if (a[u][i] > 0 && chuaxet[i])
{
				if (i == t)
{
					parent[t] = u;
					return true;
				}
				q.push(i);
				parent[i] = u;
				chuaxet[i] = false;
			}
		}
	}
	return false;
}
void maxFlow()
{
	int s = 1, t = n;
	while (BFS(1, n))
{
		int pathFlow = INT_MAX;
		for (int v = t; v != s; v = parent[v])
{
			int u = parent[v];
			pathFlow = min(pathFlow, a[u][v]);
		}
		for (int v = t; v != s; v = parent[v])
{
			int u = parent[v];
			a[u][v] -= pathFlow;
			a[v][u] += pathFlow;
		}
		val += pathFlow;
	}
}

int main() {
	readFile();
	maxFlow();
	writeFile();
	return 0;
}

