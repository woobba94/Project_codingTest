//#include <bits/stdc++.h>
//using namespace std;
//int n, m, v;
//vector <int> arr[1001] = {};
//bool visited[1001] = {};
//void DFS(int index);
//void BFS(int index);
//int main()
//{
//	
//	cin >> n >> m >> v;
//
//	for (int i = 0; i < m; i++)
//	{
//		int start, end;
//		cin >> start >> end;
//		arr[start].push_back(end);
//		arr[end].push_back(start);
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//		sort(arr[i].begin(), arr[i].end());
//	}
//
//	DFS(v);
//
//	for (int i = 0; i < 1001; i++)
//		visited[i] = false;
//
//	cout << endl;
//
//	BFS(v);
//
//}
//
//void DFS(int index)
//{
//	// �̹� �湮�� ��� ����
//	if (visited[index]) return;
//
//	// �湮ó��
//	visited[index] = true;
//
//	cout << index << " ";
//
//	// ����� ������� ���ʴ�� �湮
//	for (int i = 0; i < arr[index].size(); i++)
//	{
//		DFS(arr[index][i]);
//	}
//	
//}
//
//void BFS(int index) 
//{
//	queue<int> q;
//	q.push(index);
//	visited[index] = true;
//
//	while (!q.empty()) 
//	{
//		int temp = q.front();
//		q.pop();
//
//		cout << temp << " ";
//
//		for (int i = 0; i < arr[temp].size(); i++) 
//		{
//			int next = arr[temp][i];
//			if (!visited[next]) 
//			{
//				q.push(next);
//				visited[next] = true;
//			}
//		}
//	}
//}