//#include <bits/stdc++.h>
//using namespace std;
//
//const int MAX_SIZE = 1000;
//
//vector <int> graph[MAX_SIZE];
//bool visited[MAX_SIZE];
//
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
//void dfs(int index) 
//{
//	// stack �� ���� �湮�Ѱŷ� �Ǵ�
//	// �ش� ��带 true�� ���ش�.
//	stack <int> s;
//	s.push(index);
//	visited[index] = true;
//	cout << index << " ";
//
//	while (!s.empty()) 
//	{
//		int currentNode = s.top();
//		s.pop();
//		for (int i = 0; i < graph[currentNode].size(); i++)
//		{
//			int nextNode = graph[currentNode][i];
//			if (visited[nextNode] == false) 
//			{
//				cout << nextNode << " ";
//				visited[nextNode] = true;
//				// pop()�� �߾��� ������ ���� currentNode�� �־������..
//				s.push(currentNode);
//				s.push(nextNode);
//				break;
//			}
//		}
//	}
//}