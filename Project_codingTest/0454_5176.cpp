//#include <bits/stdc++.h>
//using namespace std;
//
//const int MAX_SIZE = 501;
//
//int main()
//{
//	int k;
//	cin >> k;
//
//	while(k--)
//	{
//		// ���� �Ұ��� ��
//		int failCount = 0;
//		int p, m; // ������ ��, �ڸ� ��
//		cin >> p >> m;
//
//		bool isFill[MAX_SIZE] = {};
//
//		for (int i = 0; i < p; i++)
//		{
//			int wantNum;
//			cin >> wantNum;
//
//			// �ڸ��� ���������
//			if (!isFill[wantNum]) isFill[wantNum] = true;
//			else failCount++;
//		}
//
//		cout << failCount << endl;
//	}
//}