//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	int* students = new int[n];
//	int* cards = new int[m];
//
//	// ī�� ���� 1 ~ m
//	for (int i = 0; i < m; i++)
//	{
//		cards[i] = i + 1;
//	}
//
//	// �л� ��ȣ �Է�
//	for (int i = 0; i < n; i++)
//	{
//		cin >> students[i];
//	}
//
//	
//	int cardCount = 0;
//
//	int index = 0;
//
//	for (int i = 0; i < n - 1; i++)
//	{
//		if (students[i] % cards[cardCount] >
//			students[i + 1] % cards[cardCount])
//		{
//			int temp = students[i];
//			students[i] = students[i + 1];
//			students[i + 1] = temp;
//		}
//		// ������ �л� ����
//		if (i == n - 2)
//		{
//			cardCount++;
//			i = -1;
//		}
//		if (cardCount == m) break;
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		cout << students[i] << endl;
//	}
//}