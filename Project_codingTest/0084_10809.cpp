//#include <iostream>
//
//using namespace std;
//
//void setAscii(int ascii[]);
//void overlapDel(char arr[]);
//void setResult(int result[]);
//int ascii[26];
//
//int main()
//{
//	char arr[101] = {};
//	cin >> arr;
//
//	int result[26] = {};
//
//	setAscii(ascii);
//	overlapDel(arr);
//	setResult(result);
//	
//
//	for (int i = 0; i < 101; i++)
//	{
//		if (arr[i] == '\0') break;
//
//		for (int j = 0; j < 26; j++)
//		{
//			// ã����
//			if (arr[i] - '0' == ascii[j])
//			{
//				result[j] = i;
//			}
//		}
//	}
//
//	for (int i = 0; i < 26; i++)
//	{
//		cout << result[i] << " ";
//	}
//}
//
//// -1 �� �ʱ�ȭ
//void setResult(int result[])
//{
//	for (int i = 0; i < 26; i++)
//	{
//		result[i] = -1;
//	}
//}
//
//// �ߺ� ����
//void overlapDel(char arr[])
//{
//	for (int i = 0; i < 101; i++)
//	{
//		if (arr[i] == '\0') break;
//
//		for (int j = 0; j < 100; j++)
//		{
//			if (i != j)
//			{
//				if (arr[i] == arr[j])
//				{
//					arr[j] = '-1';
//				}
//			}
//		}
//	}
//}
//
//void setAscii(int ascii[])
//{
//	// a �� �ƽ�Ű�ڵ� 49
//	int temp = 49;
//	for (int i = 0; i < 26; i++)
//	{
//		ascii[i] = temp;
//		temp++;
//	}
//}