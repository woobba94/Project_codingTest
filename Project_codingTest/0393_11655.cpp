//#include <bits/stdc++.h>
//using namespace std;
//const int MAX_SIZE = 101;
//int main()
//{
//	char input[MAX_SIZE];
//	cin.getline(input, MAX_SIZE);
//
//	for (int i = 0; i < MAX_SIZE; i++)
//	{
//		if (input[i] == '\0') break;
//		// ���ڸ� continue
//		if (input[i] - '0' < 10) continue;
//		
//		// �빮��
//		if (input[i] < 'a')
//		{
//			input[i] += 13;
//			if (input[i] > 'Z') input[i] -= 26;
//		}
//		// �ҹ���
//		else
//		{
//			input[i] -= 'a';
//			input[i] += 13;
//			if (input[i] >= 26) input[i] -= 26;
//			input[i] += 'a';
//		}
//	}
//	
//	for (int i = 0; i < MAX_SIZE; i++)
//	{
//		if (input[i] == '\0') break;
//		cout << input[i];
//	}
//}