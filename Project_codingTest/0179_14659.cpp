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
//	int count = 0;
//	int maxCount = 0;
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			if (arr[i] > arr[j])
//			{
//				count++;
//			}
//			else break;
//		}
//		if (count > maxCount)
//		{
//			maxCount = count;
//		}
//		count = 0;
//	}
//
//	cout << maxCount;
//}