//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int a = 'a';
//	int A = 'A'+ ('a' - 'A');
//
//	int count[26] = {};
//	string input;
//	cin >> input;
//
//	for (int i = 0; i < input.length(); i++)
//	{
//		// �빮��
//		if(input[i] < 97)
//			count[input[i] - 'A']++;
//		// �ҹ���
//		else
//			count[input[i] - 'a']++;
//	}
//	int maxCount = 0;
//	char result = 0;
//	for (int i = 0; i < 26; i++)
//	{
//		if (maxCount < count[i])
//		{
//			maxCount = count[i];
//			result = i + 'A';
//		}
//	}
//	int flag = 0;
//	for (int i = 0; i < 26; i++)
//	{
//		if (maxCount == count[i])
//		{
//			flag++;
//			if (flag == 2)
//			{
//				cout << '?';
//				return 0;
//			}
//		}
//	}
//	cout << result;
//}