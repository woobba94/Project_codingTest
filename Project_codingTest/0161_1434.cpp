//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//
//	int boxVolume[50] = {};
//	int bookVolume[50] = {};
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> boxVolume[i];
//	}
//
//	for (int i = 0; i < m; i++)
//	{
//		cin >> bookVolume[i];
//	}
//
//	int boxIndex = 0;
//	int result = 0; // ����Ǵ� ����
//	for (int i = 0; i < m; i++)
//	{
//		// å�� �ڽ��� �ȵ���
//		if (bookVolume[i] > boxVolume[boxIndex])
//		{
//			boxIndex++;
//			i--;
//		}
//		// å�� �ڽ��� ����
//		else
//		{
//			// �׿� ����++
//			// result += (boxVolume[boxIndex] - bookVolume[i]);
//			boxVolume[boxIndex] -= bookVolume[i];
//		}
//
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		result += boxVolume[i];
//	}
//
//
//	cout << result;
//
//}
