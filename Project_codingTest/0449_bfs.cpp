//#include <bits/stdc++.h>
//using namespace std;
//
//const int MAX_SIZE = 1000;
//vector<int> graph[MAX_SIZE];
//bool visited[MAX_SIZE];
//
//void bfs(int start);
//int main() {
//
//	int n, m, start;
//	cin >> n >> m >> start;
//
//	fill(visited, visited + MAX_SIZE, false);
//
//	for (int i = 0; i < m; i++) 
//	{
//		int x, y;
//		cin >> x >> y;
//
//		graph[x].push_back(y);
//		graph[y].push_back(x);
//	}
//
//	for (int i = 1; i <= n; i++) 
//	{
//		sort(graph[i].begin(), graph[i].end());
//	}
//
//	bfs(start);
//
//}
//
//void bfs(int index) 
//{
//	queue<int> q;
//	q.push(index);
//	visited[index] = true;
//
//	while (!q.empty()) 
//	{
//		int temp = q.front();
//		q.pop();
//		cout << temp << " ";
//
//		for (int i = 0; i < graph[temp].size(); i++)
//		{
//			// �湮���� �ʾҴٸ�
//			if (visited[graph[temp][i]] == false) 
//			{
//				// ť�� �־��ְ� �湮������ ǥ��
//				q.push(graph[temp][i]);
//				visited[graph[temp][i]] = true;
//			}
//		}
//	}
//}