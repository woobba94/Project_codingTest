//#include <iostream>
//using namespace std;
//
//int dp[100001] = {};
//int n;
//int getMax(int a, int b);
//void sort(int* arr);
//void quickSort(int* arr, int start, int end);
//
//int main()
//{
//
//	cin >> n;
//	int* arr = new int[n];
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//
//	quickSort(arr, 0, n - 1);
//	int k = 1;
//	dp[0] = arr[0] + k;
//	for (int i = 1; i < n; i++)
//	{
//		k++;
//		dp[i] = getMax(dp[i - 1], arr[i] + k);
//	}
//
//	cout << dp[n - 1] + 1;
//}
//
//int getMax(int a, int b)
//{
//	if (a < b)
//		return b;
//	return a;
//}
//
//void quickSort(int* arr, int start, int end)
//{
//	if (start >= end) // ���Ұ� 1���� ��� �״�� �α�
//		return;
//
//	int pivot = start; // �Ǻ��� ù��° ����
//	int i = start + 1;
//	int j = end;
//	int temp;
//
//	// �����ε��� <= ������ �϶�
//	while (i <= j) 
//	{ 
//		// �Ǻ����� ���� �� ã��
//		while (i <= end && (arr[i] >= arr[pivot])) 
//		{ 
//			i++;
//		}
//		// �Ǻ����� ū �� ã��
//		while (j > start && (arr[j] <= arr[pivot])) 
//		{ 
//			j--;
//		}
//
//		// ������ ����. ū ��(j) <-> �Ǻ�
//		if (i > j) 
//		{ 
//			temp = arr[j];
//			arr[j] = arr[pivot];
//			arr[pivot] = temp;
//		}
//		// �������� �ʾҴٸ� ū��(i) <-> ������(j)
//		else 
//		{ 
//			temp = arr[i];
//			arr[i] = arr[j];
//			arr[j] = temp;
//		}
//	}
//
//	quickSort(arr, start, j - 1);
//	quickSort(arr, j + 1, end);
//}
//
//void sort(int* arr)
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n - 1; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}