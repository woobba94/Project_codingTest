//#include <iostream>
//using namespace std;
//
//long long calc(int*, int size);
//void sort(int* (&arr), int size, bool = true);
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	int ropeCount = 0;
//	cin >> ropeCount;
//	int* weight = new int[ropeCount];
//
//	for (int i = 0; i < ropeCount; i++)
//	{
//		cin >> weight[i];
//	}
//
//	sort(weight, ropeCount, false); // �������� ����
//
//	cout << calc(weight, ropeCount);
//}
//
//long long calc(int* weight, int size)
//{
//	long long result = 0;
//	for (int i = 0; i < size; i++)
//	{
//		long long temp = weight[i] * (i + 1);
//		if (result < temp)
//		{
//			result = temp;
//		}
//	}
//
//	return result;
//}
//void sort(int* (&arr), int size, bool set)
//{
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size - 1; j++)
//		{
//			// �������� (����Ʈ)
//			if (set == true)
//			{
//				if (arr[j] > arr[j + 1])
//				{
//					int temp = arr[j];
//					arr[j] = arr[j + 1];
//					arr[j + 1] = temp;
//				}
//			}
//			// ��������
//			else
//			{
//				if (arr[j] < arr[j + 1])
//				{
//					int temp = arr[j];
//					arr[j] = arr[j + 1];
//					arr[j + 1] = temp;
//				}
//			}
//			
//		}
//	}
//}