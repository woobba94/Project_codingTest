//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//
//	int* arr = new int[n]();
//
//	// �Է�
//	for (int i = 0; i < n; i++)
//	{
//		int input = 0;
//		cin >> input;
//		arr[i] = input;
//	}
//
//	int count = 1;
//	int max = arr[n - 1];
//
//	// count ����
//	for (int i = n - 2; i >= 0; i--)
//	{
//		if (arr[i] > max)
//		{
//			count++;
//			// max ����
//			max = arr[i];
//		}
//	}
//	cout << count;
//}
//
