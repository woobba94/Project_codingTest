//#include <iostream>
//
//using namespace std;
//
//const int MAX_SIZE = 1000;
//
//int calc(int n, int k);
//int main(void) 
//{
//	int n, k;
//	cin >> n >> k;
//
//	cout << calc(n, k);
//}
//
//int calc(int n, int k)
//{
//	// ��� ������� üũ
//	int count = 0;
//
//	int arr[MAX_SIZE];
//	for (int i = 2; i <= n; i++)
//	{
//		arr[i] = i;
//	}
//
//	// 2���� n���� ��� üũ
//	for (int i = 2; i <= n; i++)
//	{
//		// 1����� ��� < n ����
//		for (int j = 1; i * j <= n; j++)
//		{
//			// �̹� ������ ��
//			if (arr[i * j] == -1)
//			{
//				continue;
//			}
//
//			// ����� ���� ������
//			arr[i * j] = -1;
//
//			// ���� Ƚ��++
//			count++;
//
//			// k ��° ��������
//			if (count == k)
//			{
//				// �ش� ��� ��ȯ
//				return i * j;
//			}
//		}
//	}
//}