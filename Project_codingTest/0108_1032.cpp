//#include <iostream>
//
//using namespace std;
//void calcPattern(char arr[], char result[]);
//int main()
//{
//	int n = 0;
//	cin >> n;
//	char input[51][51];
//	char result[51] = {};
//	for(int i = 0; i < n; i++)
//	{
//		cin >> input[i];
//	}
//
//	// ù ���� ����
//	for (int i = 0; i < 50; i++)
//	{
//		if (input[0][i] == '\0') break;
//		result[i] = input[0][i];
//	}
//
//	// ù ���� ���� üũ
//	for (int i = 1; i < n; i++)
//	{
//		calcPattern(input[i], result);
//	}
//
//	// ���
//	for (int i = 0; i < 50; i++)
//	{
//		if (result[i] == '\0') break;
//		cout << result[i];
//	}
//}
//
//// ���� ���
//void calcPattern(char arr[], char result[])
//{
//	for (int i = 0; i < 50; i++)
//	{
//		if (arr[i] == '\0') break;
//		if (result[i] != arr[i]) result[i] = '?';
//	}
//}