//#include <iostream>
//
//using namespace std;
//void sort(int& p1, int& p2);
//void battle(int* (&arr), int& size, int p1, int p2);
//bool isMeet(int* arr, int size, int p1, int p2);
//int main()
//{
//	// ������ �� <= 10000
//	int n = 0;
//	int player1, player2;
//	int result = 1;
//	cin >> n >> player1 >> player2;
//	sort(player1, player2);
//	// �ٷ� ������ ���
//	if (player1 % 2 != 0 && player2 - player1 == 1)
//	{
//		cout << result << endl;
//		return 0;
//	}
//
//	int size = n + 1;
//	int* arr = new int[size];
//
//	// ����ǥ �ʱ�ȭ ( 1 ~ n )
//	for (int i = 1; i < size; i++)
//	{
//		arr[i] = i;
//	}
//
//	// p1, p2 �� ���������� �ݺ�
//	while (isMeet(arr, size, player1, player2) == false)
//	{
//		if (size < 4)
//		{
//			break;
//		}
//		result++;
//		battle(arr, size, player1, player2);
//	}
//	// ���������� �� ������
//	if (size < 2)
//	{
//		cout << -1 << endl;
//	}
//	else
//	{
//		cout << result << endl;
//	}
//	
//}
//
//void battle(int* (&arr), int &size, int p1, int p2)
//{
//	int sizeTemp = 0;
//	int pointer = 1;
//	for (int i = 2; i < size; i += 2)
//	{
//		if (arr[i - 1] == p1)
//		{
//			arr[i] = arr[i - 1];
//		}
//		if (arr[i - 1] == p2)
//		{
//			arr[i] = arr[i - 1];
//		}
//
//		arr[pointer] = arr[i];
//
//		// ���� ��ġ ����
//		pointer++;
//		sizeTemp++; // �� ���� ���������� ���
//	}
//	// ���Ұ� Ȧ����
//	if ((size - 1) % 2 != 0)
//	{
//		// ������ ���� �������� ����.
//		arr[pointer] = arr[size - 1];
//		sizeTemp++;
//	}
//
//	size -= sizeTemp;
//}
//
//bool isMeet(int* arr, int size, int p1, int p2)
//{
//	for (int i = 1; i < size; i++)
//	{
//		if (i % 2 != 0)
//		{
//			if (arr[i] == p1 && arr[i + 1] == p2)
//			{
//				return true;
//			}
//		}
//	}
//	return false;
//}
//
//// �������� p1 ����
//void sort(int &p1, int &p2)
//{
//	if (p1 > p2)
//	{
//		int temp = p1;
//		p1 = p2;
//		p2 = temp;
//	}
//}
//
