//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int result = 0;
//
//	int needWarm, needMoisture;
//	cin >> needWarm >> needMoisture;
//
//	if (needWarm < needMoisture)
//	{
//		int temp = needWarm;
//		needWarm = needMoisture;
//		needMoisture = temp;
//	}
//	
//	// ���� �±�� ����
//	int nowWarm = 0;
//	int nowMoisture = 0;
//
//	int flag = false;
//	while (1)
//	{
//		if (needWarm == 0 && needMoisture == 0) break;
//
//		// ó���̸�
//		if (flag == false)
//		{
//			flag = true;
//			result += needWarm;
//			needWarm = 0;
//			result += needMoisture - 1;
//			result += (needMoisture - 1) / 10;
//			needMoisture = 1;
//		}
//		else
//		{
//			result += needMoisture;
//		}
//			
//	}
//
//	cout << result;
//
//}
