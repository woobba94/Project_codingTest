//#include <iostream>
//using namespace std;
//
//int main()
//{
//	// SUN~MON ���� (7��, 3����)
//	char week[8][4] = { {'S','U','N'}, {'M','O','N'}, {'T','U','E'}, {'W','E','D'},
//						{'T','H','U'}, {'F','R','I'}, {'S','A','T'}  }; 
//
//	int month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//
//	int x, y;
//
//	int count = 0;
//
//	cin >> x >> y;
//
//	// 1��~x�� ���
//	for (int i = 0; i < x; i++)  
//	{
//		// �Է��� ���� i + 1�̸�
//		if ((i + 1) == x)  
//		{
//			// ���� ��¥�� ������
//			count += y;  
//		}
//		else
//		{
//			// �ش��ϴ� �� �ϼ� ������
//			count += month[i];  
//		}
//	}
//
//	for (int i = 0; i < 3; i++)
//	{
//		cout << week[(count % 7)][i];
//	}
//	
//	cout << endl;
//
//}