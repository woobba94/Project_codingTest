//#include <iostream>
//using namespace std;
//
//void quickSort(int* (&arr), int start, int end);
//int main()
//{
//	int n;
//	cin >> n;
//	int* arr = new int[n];
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//	quickSort(arr, 0, n - 1);
//
//	for (int i = 0; i < n; i++)
//	{
//		cout << arr[i] << endl;
//	}
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
//	cout << "pivot : " << pivot << endl;
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