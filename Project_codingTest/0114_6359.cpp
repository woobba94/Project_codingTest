//#include <iostream>
//using namespace std;
//
//int main()
//{
//	// ���������� true
//	bool* isUnlocked;
//	int roomCount = 0;
//
//	int caseCount = 0;
//	cin >> caseCount;
//
//	while (caseCount--)
//	{
//		cin >> roomCount;
//		isUnlocked = new bool[roomCount + 1] {};
//
//		// i �� �ݺ�
//		for (int i = 1; i < roomCount + 1; i++)
//		{
//			// i ����� Ʈ����
//			for (int j = i; j < roomCount + 1; j += i)
//			{
//				// ��������� ���� ���������� ���
//				if (isUnlocked[j] == false)
//					isUnlocked[j] = true;
//				else
//					isUnlocked[j] = false;
//			}
//		}
//		int count = 0;
//		for (int i = 1; i < roomCount + 1; i++)
//		{
//			// ���������� count++
//			if (isUnlocked[i] == true) count++;
//		}
//		cout << count << endl;
//	}
//}