//#include<iostream>
//using namespace std;
//
//const int MAX_SIZE = 10001;
//int arr[MAX_SIZE] = {};
//void calc(int arr[], int, int);
//
//int main() 
//{
//	int m, n;
//	cin >> m >> n;
//	
//	calc(arr, m, n);
//
//}
//
//void calc(int arr[], int min, int max)
//{
//	// �ʱ�ȭ
//	for (int i = 1; i < MAX_SIZE; i++)
//	{
//		arr[i] = i;
//	}
//
//	// 2���� �˻�
//	for (int i = 2; i < MAX_SIZE; i++)
//	{
//		// �̹� ������ ���  
//		if (arr[i] == -1) continue;
//
//		// �������� ���� ��� �ڱ��ڽ��� ������ ��� �����  
//		for (int j = 2 * i; j < MAX_SIZE; j += i)
//		{
//			if (arr[i] == -1) continue;
//			else arr[j] = -1;
//		}
//	}
//
//	for (int i = min; i < max + 1; i++)
//	{
//		if (min != 0 && min != 1)
//		{
//			if (arr[i] != -1)
//			{
//				cout << i << endl;
//			}
//		}
//	}
//}