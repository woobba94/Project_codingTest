//#include <iostream>
//using namespace std;
//
//int n = 0; //(1 �� N �� 100,000)
//int binarySearch(int* arr, int num);
//void quickSort(int* (&arr), int start, int end);
//int main()
//{
//	ios_base::sync_with_stdio(0);
//	cin.tie(0); //cin �ӵ� ��� ����
//
//	cin >> n;
//	int* arrN = new int[n];
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arrN[i];
//	}
//	quickSort(arrN, 0, n - 1);
//
//	int m = 0; //(1 �� N �� 100,000)
//	cin >> m;
//	int* arrM = new int[m];
//
//	for (int i = 0; i < m; i++)
//	{
//		cin >> arrM[i];
//	}
//
//	for (int i = 0; i < m; i++)
//	{
//		cout << binarySearch(arrN, arrM[i]) << "\n";
//	}
//
//}
//
//int binarySearch(int* arr, int target)
//{
//	int start = 0;
//	int end = n - 1;
//	int mid;
//
//	while (start <= end)
//	{
//		mid = (end + start) / 2;
//
//		if (arr[mid] == target) return 1;
//		else if (target < arr[mid])
//		{
//			end = mid - 1;
//		}
//		else
//		{
//			start = mid + 1;
//		}
//	}
//	return 0;
//}
//
//// �� ����(��������)
//void quickSort(int* (&arr), int start, int end)
//{
//	if (start >= end)
//	{
//		return;
//	}
//	int temp;
//	int pivot = arr[(start+end)/2]; // ������(�߰�)
//	int left = start; // ���� �������
//	int right = end; // ������ �������
//
//	while (left <= right)
//	{
//		while (arr[left] < pivot) left++; // ���ʿ� ������ ���� ū���� ������ ��� ++
//		while (arr[right] > pivot) right--;
//
//		// left�� ���ʿ��� ���������� ū ���� ã��.
//		// right�� �����ʿ��� ���������� ���� ���� ã��.
//
//		if (left <= right) // �������϶�
//		{
//			// ������ ū���� �������� �������� ��ȯ
//			temp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = temp;
//			left++;
//			right--;
//		}
//	}
//	quickSort(arr, start, right); // ���� �κ� �ٽ� ������
//	quickSort(arr, left, end); // ������ �κ� �ٽ� ������
//}