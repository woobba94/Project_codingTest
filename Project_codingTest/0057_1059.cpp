//#include <iostream>
//
//using namespace std;
//
//void sort(int* (&arr), int size);
//int main() 
//{
//	// ����ũ��
//	int L; 
//	cin >> L;
//
//	int* arr = new int[L];
//
//	bool isInclude = false;
//
//	for (int i = 0; i < L; i++) 
//	{
//		cin >> arr[i];
//	}
//
//	// ����
//	sort(arr, L);
//
//	int n; 
//	cin >> n;
//
//	// ���ҿ� n�� �ִ��� �˻�
//	for (int i = 0; i < L; i++) 
//	{
//		if (arr[i] == n) 
//		{
//			isInclude = true;
//			break;
//		}
//	}
//
//	if (isInclude == true) 
//	{
//		cout << 0 << endl;
//	}
//	else 
//	{
//		int start = 0;
//		int end = 0;
//
//		for (int i = 0; i < L; i++) 
//		{
//			// n�� ���ԵǴ� ���� ã��
//			if (n < arr[i]) 
//			{
//				start = arr[i - 1];
//				end = arr[i];
//				break;
//			}
//		}
//
//		int goodCount = 0;
//
//		// ���� ���� ����
//		for (int i = start + 1; i < end; i++) 
//		{
//			for (int j = i + 1; j < end; j++) 
//			{
//				if (i <= n && n <= j) 
//				{
//					goodCount++;
//				}
//			}
//		}
//		cout << goodCount << endl;
//	}
//}
//
//void sort(int* (&arr), int size)
//{
//	if (size == 1) return;
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}