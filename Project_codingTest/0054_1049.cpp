//#include <iostream>
//using namespace std;
//
//int lineSet[50];
//int line[50];
//void sort(int arr[], int size);
//
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//
//	for (int i = 0; i < m; ++i)
//	{
//		cin >> lineSet[i] >> line[i];
//	}
//
//	sort(lineSet, m);
//	sort(line, m);
//
//	int sum = 0;
//	// �ʿ��� ��Ÿ��
//	int needed = n;
//	while (needed > 0)
//	{
//		// ������ ���� 6�� �̻��̸�
//		if (needed >= 6)
//		{
//			// ���� ��Ʈ�� �� ��θ�
//			if (lineSet[0] > line[0] * 6)
//			{
//				// ���ٷθ� ����
//				sum += line[0] * needed;
//				needed -= needed;
//			}
//			// ��Ʈ�� �� �θ� ��Ʈ����
//			else 
//			{
//				sum += lineSet[0];
//				needed -= 6;
//			}
//		}
//		else
//		{
//			if (lineSet[0] < line[0] * needed)
//			{
//				sum += lineSet[0];
//				needed -= 6;
//			}
//			else
//			{
//				sum += line[0] * needed;
//				needed -= needed;
//			}
//		}
//	}
//	cout << sum << endl;
//}
//
//void sort(int arr[], int size)
//{
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