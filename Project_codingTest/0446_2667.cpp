//#include <bits/stdc++.h>
//using namespace std;
//
//int n;
//vector <int> groupCount;
//bool arr[26][26] = {};
//bool visited[26][26] = {};
//int cnt = 0;
//
//void DFS(int x, int y);
//int main()
//{
//	string temp;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> temp;
//		for (int j = 0; j < n; j++)
//		{
//			arr[i][j] = temp[j] - '0';
//		}
//	}
//	
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			// ���� �ְ� �湮���� �ʾҴٸ�
//			if (arr[i][j] && !visited[i][j]) 
//			{
//				cnt = 0;
//				DFS(i, j);
//				// ī��Ʈ ��� ����
//				groupCount.push_back(cnt);
//			}
//		}
//	}
//
//	sort(groupCount.begin(), groupCount.end());
//
//	cout << groupCount.size() << endl;
//
//	for (int i = 0; i < groupCount.size(); i++)
//	{
//		cout << groupCount[i] << endl;
//	}
//	
//}
//
//void DFS(int x, int y)
//{
//	if (x < 0 || y < 0 || x >= n || y >= n || !arr[x][y] || visited[x][y]) 
//		return;
//	cnt++;
//	visited[x][y] = true;
//
//	DFS(x - 1, y); // ��
//	DFS(x + 1, y); // ��
//	DFS(x, y - 1); // �Ʒ�
//	DFS(x, y + 1); // ��
//}