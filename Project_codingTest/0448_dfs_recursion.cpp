//#include <bits/stdc++.h>
//using namespace std;
//
//const int MAX_SIZE = 1000;
//
//vector <int> graph[MAX_SIZE];
//bool visited[MAX_SIZE];
//
//void dfs(int index);
//int main()
//{
//	int n, m, start;
//	cin >> n >> m >> start;
//
//	// visited[] �ʱ�ȭ
//	fill(visited, visited + MAX_SIZE, false);
//
//	for (int i = 0; i < m; i++) 
//	{
//		int x, y;
//		cin >> x >> y;
//
//		// �� ������ ������ ����
//		graph[x].push_back(y);
//		graph[y].push_back(x);
//	}
//
//	for (int i = 1; i <= n; i++) 
//	{
//		sort(graph[i].begin(), graph[i].end());
//	}
//
//	dfs(start);
//
//}
//
//
//
//void dfs(int index) 
//{
//	// dfs�� ������ '�湮'�Ѱŷ� �Ǵ�
//	// �ش� ���� true�� ���ش�.
//	visited[index] = true;
//	cout << index << " ";
//
//	for (int i = 0; i < graph[index].size(); i++) 
//	{
//		int next = graph[index][i];
//		
//		// �湮���� �ʾҴٸ�
//		if (visited[next] == false) 
//		{
//			// ����Լ� ȣ��.
//			dfs(next);
//		}
//	}
//}