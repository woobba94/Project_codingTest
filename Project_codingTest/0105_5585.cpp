//#include <iostream>
//using namespace std;
//
//int main()
//{
//	// �Ž����� ����
//	int changeCount = 0;
//
//	// �� �ݾ�
//	int price = 0;
//	cin >> price;
//
//	// �Ž�����
//	int change = 1000 - price;
//
//	// �Ž����� ����
//	int unit[6] = { 500,100,50,10,5,1 };
//	int index = 0;
//
//	while (change)
//	{
//		// ���� ������ �Ž��� �� �� ������
//		if (unit[index] <= change)
//		{
//			changeCount++;
//			change -= unit[index];
//		}
//		// �ȵǸ� ���� ����
//		else index++;
//	}
//
//	cout << changeCount;
//}