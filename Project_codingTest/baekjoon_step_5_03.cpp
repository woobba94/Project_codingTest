//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int count[10000] = {0,};
//	int n;
//	cin >> n;
//	int *arr = new int[n];
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		count[arr[i] - 1]++;
//	}
//
//	for (int i = 0; i < n; i++) // ���� �迭�� ���ҵ�
//	{
//		for (int j = 0; j < count[i]; j++) // �� ���ڸ� ������ŭ ���
//		{
//			cout << i + 1 << endl;
//		}
//	}
//}
