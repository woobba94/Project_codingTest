//#include <bits/stdc++.h>
//using namespace std;
//
//const int MAX_MOD = 1000000;
//bool primeNumbers[MAX_MOD];
//
//bool isFail(string num, int primeNum);
//void setPrimeNumbers(int k);
//int main()
//{
//	string num;
//	int k;
//	cin >> num >> k;
//	setPrimeNumbers(k);
//
//	int failNum = 0;
//	for (int i = 2; i < k; i++)
//	{
//		if (!primeNumbers[i] && isFail(num, i))
//		{
//			failNum = i;
//			break;
//		}
//	}
//
//	if (failNum) cout << "BAD" << " " << failNum;
//	else cout << "GOOD";
//	
//}
//
//bool isFail(string num, int primeNum)
//{
//	int sum = 0;
//	// �־��� �� P �� �� �ڸ�������(ū �ڸ�������) ������ ����
//	for (int i = 0; num[i]; i++)
//	{
//		sum = (sum * 10 + (num[i] - '0')) % primeNum;
//	}
//
//	if (sum == 0) return true;
//	return false;
//}
//
//void setPrimeNumbers(int k)
//{
//	for (int i = 2; i < k; i++)
//	{
//		for (int j = i * 2; j < k; j += i)
//		{
//			primeNumbers[j] = true; // �Ҽ��ƴϸ� true
//		}
//	}
//}