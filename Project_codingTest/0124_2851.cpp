//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int score[10] = {};
//
//	for (int i = 0; i < 10; i++)
//	{
//		cin >> score[i];
//	}
//
//	// ū ���� ���� �� ����
//	int maxSum = 0;
//	int minSum = 0;
//
//	for (int i = 0; i < 10; i++)
//	{
//		// 100���� Ŭ �� ���� �ε��� �ϳ��� ������
//		maxSum = minSum + score[i];
//		if (100 <= maxSum)
//			break;
//
//		// ū ���� 100�� ���� ������ ���� ������ ����
//		minSum = maxSum;
//	}
//
//	// 100���� ���̰� maxSum �� �� �۰ų� '������'
//	if (100 - minSum >= maxSum - 100) 
//		cout << maxSum;
//	else
//		cout << minSum;
//
//}