//#include <iostream>
//#include <vector>
//using namespace std;
//
//int func(vector <vector<int>>(&bridge), int n, int m);
//
//int main()
//{
//	int caseCount = 0;
//	cin >> caseCount;
//	// 2���� ���� ����
//	vector <vector<int>> bridge(caseCount);
//
//	int left, right;
//
//	while (caseCount--)
//	{
//		cin >> left >> right;
//		// 2���� ���� �ʱ�ȭ
//		vector<vector<int>> bridge(left + 1, vector<int>(right + 1, -1));
//		cout << func(bridge, left, right) << endl;;
//	}
//}
//
//int func(vector <vector<int>> (&bridge), int n, int m)
//{
//	if (n == 1) {
//		if (bridge[n][m] == -1) {
//			bridge[n][m] = m; // �ʱ�ȭ �߱� ������ ��밡��
//		}
//		return bridge[n][m];
//	}
//	if (bridge[n][m] == -1) {
//		bridge[n][m] = 0;
//		for (int i = 1; i <= m - n + 1; ++i) {
//			bridge[n][m] += func(bridge, n - 1, m - i);
//		}
//	}
//	return bridge[n][m];
//}