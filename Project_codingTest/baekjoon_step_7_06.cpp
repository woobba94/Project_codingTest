//#include <iostream>
//#include <vector>
//using namespace std;
//
//const int DIVISOR = 1000000007;
//void cal(vector <vector<int>>& vec, int n);
//
//int main()
//{
//	vector <vector<int>> vec(1001);
//	int n = 0, k = 0;
//
//	cin >> n >> k;
//	
//	// [0][0]~[1][1] ���� 1�� �ʱ�ȭ
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 2; j++)
//		{
//			vec[i].push_back(1);
//		}
//	}
//
//	cal(vec, n);
//	cout << vec[n][k];
//
//	
//}
//
//void cal(vector <vector<int>>& vec, int n)
//{
//	for (int i = 2; i <= n; i++)
//	{
//		for (int j = 0; j <= i; j++)
//		{
//			if (i == j || j == 0)
//			{
//				vec[i][j] = 1;
//			}
//			else if (j == 1 || j == (i - 1))
//			{
//				vec[i][j] = i;
//			}
//			else // �� ū���� DIVISOR�� ���� ������
//			{
//				vec[i][j] = (vec[i - 1][j] + vec[i - 1][j - 1]) % DIVISOR;
//			}
//		}
//	}
//}