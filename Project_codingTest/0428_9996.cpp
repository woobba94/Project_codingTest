//#include <bits/stdc++.h>
//#include <regex>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	string tempPattern;
//	cin >> tempPattern;
//	int tempLen = tempPattern.length();
//	string left = "", right = "";
//	// ����ǥ���� ��������� *�� �������� �ɰ���
//	for (int i = 0; i < tempLen; i++)
//	{
//		if (tempPattern[i] == '*')
//		{
//			for (int j = 0; j < i; j++)
//				left += tempPattern[j];
//
//			for (int j = i + 1; j < tempLen; j++)
//				right += tempPattern[j];
//
//			break;
//		}
//	}
//	// ���� ����
//	// . �� ������ ���ڰ� �ϳ� �����Ѵٴ� ����
//	// (.)+ �� ������ ���ڰ� ������ �����Ѵٴ� ����
//	// ((.)+)? �� (.)+ ������ ���� or ������ ����
//	regex pattern(left + "((.)+)?" + right);
//	while (n--)
//	{
//		string s;
//		cin >> s;
//		cout << (regex_match(s, pattern) ? "DA\n" : "NE\n");
//	}
//}