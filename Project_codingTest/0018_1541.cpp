//#include <iostream>
//using namespace std;
//
//int minResult(char str[]);
//
//int main()
//{
//	char str[50] = {';',};
//	cin >> str;
//	cout << minResult(str) << endl;
//}
//int minResult(char str[])
//{
//	int result = 0;
//	bool onlyNum = true;
//	for (int i = 0; i < 50; i++)
//	{
//		// - ������
//		if (str[i] == '-')
//		{
//			onlyNum = false;
//			// ������ ���� ��� ���ϱ�
//			for (int k = 0; k < i; k++)
//			{
//				//���� �ε����� ���ڸ�
//				if (str[k + 1] != '-' && str[k + 1] != '+' && str[k + 1] != '\0')
//				{
//					if (str[k + 2] != '-' && str[k + 2] != '+' && str[k + 2] != '\0')
//					{
//						if (str[k + 3] != '-' && str[k + 3] != '+' && str[k + 3] != '\0')
//						{
//							if (str[k + 4] != '-' && str[k + 4] != '+' && str[k + 4] != '\0')
//							{
//								result += int(str[k] - '0') * 10000;
//							}
//							else
//							{
//								result += int(str[k] - '0') * 1000;
//							}
//						}
//						else
//						{
//							result += int(str[k] - '0') * 100;
//						}
//					}
//					else
//					{
//						result += int(str[k] - '0') * 10;
//					}
//				}
//				else
//				{
//					result += int(str[k] - '0');
//				}
//			}
//			for (int j = i + 1; i < 50 - i; j++)
//			{
//				// �������
//				if (str[j] == '\0') return result;
//				// ���� ������ ����
//				if (str[j] == '-' || str[j] == '+') continue;
//				//���� �ε����� ���ڸ�
//				if (str[j + 1] != '-' && str[j + 1] != '+' && str[j + 1] != '\0')
//				{
//					if (str[j + 2] != '-' && str[j + 2] != '+' && str[j + 2] != '\0')
//					{
//						if (str[j + 3] != '-' && str[j + 3] != '+' && str[j + 3] != '\0')
//						{
//							if (str[j + 4] != '-' && str[j + 4] != '+' && str[j + 4] != '\0')
//							{
//								result -= int(str[j] - '0') * 10000;
//							}
//							else
//							{
//								result -= int(str[j] - '0') * 1000;
//							}
//						}
//						else
//						{
//							result -= int(str[j] - '0') * 100;
//						}
//					}
//					else
//					{
//						result -= int(str[j] - '0') * 10;
//					}
//				}
//				else
//				{
//					result -= int(str[j] - '0');
//				}
//			}
//		}
//	}
//
//	if (onlyNum == true)
//	{
//		for (int i = 0; i < 50; i++)
//		{
//			if (str[i] == '\0') return result;
//
//			result += int(str[i] - '0');
//		}
//		
//	}
//
//	return result;
//}