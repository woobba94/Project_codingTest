//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
// 	ios::sync_with_stdio(false);
//	cin.tie(0);
//	int n;
//	long long m = 0;
//
//	cin >> n >> m;
//
//	vector <pair<long long, long long>> vec(n);
//
//
//	for (int i = 0; i < n; i++)
//	{
//		long long start, end;
//		cin >> start >> end;
//
//		// ������ �մԵ鸸 ����
//		if (start > end)vec.push_back({ end, start });
//	}
//
//	sort(vec.begin(), vec.end());
//
//	long long from = vec[0].first;
//	long long to = vec[0].second;
//
//	for (int i = 0; i < vec.size(); i++)
//	{
//		// ����� ���������� ���ο� ������� �� ũ��
//		if (to < vec[i].first)
//		{
//			m += (to - from) * 2;
//			from = vec[i].first;
//			to = vec[i].second;
//		}
//		// ����� ���������� ���ο� �������� �� ũ��
//		else if (to < vec[i].second)
//		{
//			to = vec[i].second; // ������ ����
//		}
//	}
//	m += 2 * (to - from);
//	cout << m;
//
//}