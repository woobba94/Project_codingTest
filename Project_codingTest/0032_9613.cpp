//#include <iostream>
//
//using namespace std;
//
//int getGCD(int a, int b);
//int main()
//{
//	int caseCount = 0;
//	int* numArr;
//	cin >> caseCount;
//	
//	for (int i = 0; i < caseCount; i++)
//	{
//		int n = 0;
//		long long sum = 0;
//		cin >> n;
//		numArr = new int[n];
//
//		for (int j = 0; j < n; j++)
//		{
//			cin >> numArr[j];
//		}
//
//		// �� ���� �ֵ��� �ִ����� �ջ� (������ �ε��� �˻� ����)
//		for (int k = 0; k < n - 1; k++)
//		{
//			// ������ �� ���� ���� ���� ����� ��� (�ߺ� ����) l = k + 1
//			for (int l = k + 1; l < n; l++)
//			{
//				sum += getGCD(numArr[k], numArr[l]);
//			}
//		}
//		cout << sum << endl;
//	}
//}
//
//
//int getGCD(int a, int b)
//{
//	if (b == 0) return a;
//
//	return getGCD(b, a % b);
//}