//#include <iostream>
//using namespace std;
//int getMax(int a, int b);
//void calcRouteCount(int** (&arr), int& result, int n);
//int main()
//{
//	int n = 0;
//	cin >> n;
//	// n���� ������ 2�����迭 ����
//	int** arr = new int*[n];
//
//	int result = 0;
//	// �ʱ�ȭ
//	for (int i = 0; i < n; i++)
//	{
//		arr[i] = new int[n];
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < i + 1; j++)
//		{
//			cin >> arr[i][j];
//		}
//	}
//
//	calcRouteCount(arr, result, n);
//	result += arr[0][0];
//	cout << result;
//}
//
//void calcRouteCount(int** (&arr), int& result, int n)
//{
//	for (int i = 2; i < n; i++) // ������ 3������ ���. 
//	{
//		for (int j = 0; j < i + 1; j++) // �ι�° ������ ���
//		{
//			if (j == 0)
//			{
//				arr[i][j] += arr[i - 1][j];
//			}
//			else if (j == i)
//			{
//				arr[i][j] += arr[i - 1][j - 1];
//			}
//			else
//			{
//				arr[i][j] += getMax(arr[i - 1][j - 1], arr[i - 1][j]);
//			}
//		}
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		if (result < arr[n - 1][i])
//		{
//			result = arr[n - 1][i];
//		}
//	}
//}
//
//int getMax(int a, int b)
//{
//	if (a > b) return a;
//	return b;
//}