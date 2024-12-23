#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
vector<int> edge[1001];
bool visit1[1001];
bool visit2[1001];

void dfs(int v) {
	if (visit1[v])return;
	visit1[v] = true;
	cout << v << " ";
	for (int x:edge[v]){
		dfs(x);
	}
}
void bfs(int v) {
	queue<int> q;
	q.push(v);
	visit2[v] = true;
	while (!q.empty())
	{
		int x = q.front();
		cout << x << " ";
		q.pop();
		for (int y : edge[x]) {
			if (visit2[y])continue;
			q.push(y);
			visit2[y] = true;
		}
	}
}
int main() {
	int n, m, v;
	cin >> n >> m >> v;
	for (int i = 0; i < m; i++)
	{
		int a, b;
		cin >> a >> b;
		edge[a].push_back(b);
		edge[b].push_back(a);
	}
	for (int i = 1; i < n+1; i++){
		sort(edge[i].begin(), edge[i].end());
	}
	dfs(v);
	printf("\n");
	bfs(v);
	return 0;
}