//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int cardCount = 0;
//	int m = 0;
//	int sum = 0;
//	int min = 9999999;
//	int result = 0;
//	cin >> cardCount >> m;
//
//	int* cardArr = new int[cardCount];
//
//	for (int i = 0; i < cardCount; i++)
//	{
//		cin >> cardArr[i];
//	}
//
//	for (int i = 0; i < cardCount - 2; i++)
//	{
//		for (int j = i + 1; j < cardCount - 1; j++)
//		{
//			for (int k = j + 1; k < cardCount; k++)
//			{
//				sum = cardArr[i] + cardArr[j] + cardArr[k];
//				// ���� ���� 0�̻� && ������ �ּ� ���̿� ���� �� ��
//				if (0 <= m - sum && m - sum < min)
//				{
//					// min ����
//					min = m - sum;
//					result = sum;
//				}
//			}
//		}
//	}
//
//	cout << result;
//}