//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//
//	int* arr = new int[n];
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//
//	int maxHeight = arr[0];
//	int leftCount = 1, rightCount = 1;
//	// ���ʿ��� ������ -> �ι�° �ͺ��� �˻�
//	for (int i = 1; i < n; i++)
//	{
//		if (maxHeight < arr[i])
//		{
//			leftCount++;
//			maxHeight = arr[i];
//		}
//	}
//
//	// �ְ���� ������ ù��°�� �ʱ�ȭ
//	maxHeight = arr[n - 1];
//
//	// �ι�°����
//	for (int i = n - 2; i >= 0; i--)
//	{
//		if (maxHeight < arr[i])
//		{
//			rightCount++;
//			maxHeight = arr[i];
//		}
//	}
//
//	cout << leftCount << endl;
//	cout << rightCount;
//
//
//	
//}