//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	// N�� 1,000,000���� �۰ų� ���� �ڿ��� �Ǵ� 0
//	char input[8] = {};
//	cin >> input;
//	int needNum[10] = {};
//
//	
//	for (int i = 0; i < 8; i++)
//	{
//		if (input[i] == '\0') break;
//
//		// ���� �迭�� 9�� ��������� 6 count++
//		if (input[i] - '0' == 9)
//		{
//			needNum[6]++;
//		}
//		else
//		{
//			needNum[input[i] - '0']++;
//		}
//		
//	}
//
//	needNum[6] = needNum[6] / 2 + needNum[6] % 2;
//
//	int needSet = 0;
//
//	// ���� ���� �ʿ���ϴ� �縸ŭ ����
//	for (int i = 0; i < 10; i++)
//	{
//		// �� ���� �ʿ���ϸ� ����
//		if (needSet < needNum[i])
//		{
//			needSet = needNum[i];
//		}
//	}
//	
//	cout <<  needSet;
//}