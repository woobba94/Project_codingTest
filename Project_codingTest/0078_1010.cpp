//#include<iostream>
//using namespace std;
//
//int dataArr[31][31];
//void setData();
//int main()
//{
//	int testCase = 0;
//	cin >> testCase;
//	setData();
//	while (testCase--)
//	{
//		int n, m; //  (0 < N �� M < 30)
//
//		cin >> n >> m;
//
//		cout << dataArr[n][m] << endl;
//	}
//}
//
//void setData()
//{
//	// �ʱⰪ ���� : ���� �� 1���϶� �� ��� => ������ �� ����
//	for (int i = 1; i < 31; i++)
//	{
//		dataArr[1][i] = i;
//	}
//
//	// ���� �� 2�� ���� 
//	for (int i = 2; i < 31; i++)
//	{
//		for (int j = i; j < 31; j++)
//		{
//			for (int k = j - 1; 0 < k; k--)
//			{
//				// ������ ��ȭ��
//				dataArr[i][j] += dataArr[i - 1][k];
//			}
//		}
//	}
//}