//#include <iostream>
//using namespace std;
//
//
//int getCount(int* arr, int n);
//int main()
//{	
//	int t;
//	cin >> t;
//	int n;
//	
//	while (t--)
//	{
//		cin >> n;
//		int* arr = new int[n];
//		int rank1, rank2;
//		for (int i = 0; i < n; i++)
//		{
//			cin >> rank1 >> rank2;
//			arr[rank1 - 1] = rank2; // �ε����� ���� ���, ��Ұ� �������
//		}
//		cout << getCount(arr, n) << endl;
//
//	}
//}
//
//int getCount(int* arr, int n)
//{
//	int count = 1;
//	int tempRank = arr[0]; // ���� 1���� �������
//	for (int i = 1; i < n; i++)
//	{
//		// ���� ����� �� ���� -> ä��
//		if (arr[i] < tempRank)
//		{
//			count++;
//			tempRank = arr[i]; // ���� ��� ����
//		}
//	}
//	return count;
//}