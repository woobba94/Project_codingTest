//#include <iostream>
//using namespace std;
//
//int dp[101] = {};
//int plug[101] = {};
//int arr[100];
//int main()
//{
//	int n, k;
//	cin >> n >> k;
//	for (int i = 0; i < k; i++)
//	{
//		cin >> arr[i];
//		dp[arr[i]]++;
//	}
//
//	int index = 0;
//	int result = 0;
//
//	while (1)
//	{
//		bool isIn = false;
//		bool isFull = true;
//		if (index == k) break;
//
//		for (int i = 0; i < n; i++)
//		{
//			if (plug[i] == arr[index])
//			{
//				isIn = true;
//			}
//			if (plug[i] == 0)
//				isFull = false;
//		}
//
//		// �̹� �������� ��
//		if (isIn)
//		{
//			dp[arr[index]]--;
//			index++;
//		}
//		// �� ���� ���� ��
//		else if(isFull == false)
//		{
//			for (int i = 0; i < n; i++)
//			{
//				if (plug[i] == 0)
//				{
//					dp[arr[index]]--;
//					plug[i] = arr[index];
//					index++;
//					break;
//				}
//			}
//		}
//		// �̾ƾ� �� ��
//		else
//		{
//			int min = 100;
//			int outIndex = -1;
//			for (int i = 0; i < n; i++)
//			{
//				if (dp[plug[i]] <= 0)
//				{
//					outIndex = i;
//					break;
//				}
//			}
//			if (outIndex == -1)
//			{
//				bool flag[101] = {};
//				int maxArrIndex = 0;
//				for (int j = 0; j < n; j++)
//				{
//					for (int i = index + 1; i < k; i++)
//					{
//						if(plug[j] == arr[i])
//						{
//							if (flag[arr[i]] == false)
//							{
//								flag[arr[i]] = true;
//								if (maxArrIndex < i)
//								{
//									maxArrIndex = i;
//									outIndex = j;
//								}
//							}
//						}
//					}
//				}
//			}
//			if (outIndex == -1) outIndex = 0;
//			dp[arr[index]]--;
//			plug[outIndex] = arr[index];
//			index++;
//			result++;
//		}
//	}
//	cout << result;
//}