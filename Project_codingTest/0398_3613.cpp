//#include <bits/stdc++.h>
//using namespace std;
//int main()
//{
//	bool upperExist = false;
//	bool underBarExist = false;
//	bool doubleUnder = false;
//
//	string s;
//	cin >> s;
//	int len = s.length();	
//
//	// ���ڿ� �м�
//	for (int i = 1; i < len; i++)
//	{
//		if (s[i] == '_')
//		{
//			if (s[i - 1] == '_') doubleUnder = true;
//			underBarExist = true;
//		}
//		else if (s[i] - 'a' < 0) upperExist = true;
//	}
//
//	// ����ó��
//	if ((underBarExist && upperExist) || doubleUnder || 
//		// ù �ڸ� ����
//		(s[0] - 'a' < 0 || s[0] == '_' || s[len - 1] == '_'))
//	{
//		cout << "Error!";
//		return 0;
//	}
//
//	string result;
//	// c -> java
//	if (underBarExist)
//	{
//		for (int i = 0; i < len; i++)
//		{
//			if (s[i] == '_')
//			{
//				// _ ���� ���ĺ��� �빮�ڷ� ����
//				result += s[i + 1] + ('A' - 'a');
//				i++;
//			}
//			else result += s[i];
//		}
//	}
//	// java -> c
//	else
//	{
//		for (int i = 0; i < len; i++)
//		{
//			if (s[i] <= 'Z')
//			{
//				// �빮�� ���ĺ��� �ҹ��ڷ� ����
//				result += '_';
//				result += s[i] + ('a' - 'A');
//			}
//			else result += s[i];
//		}
//	}
//	cout << result;
//}