//#include <iostream>
//using namespace std;
//
//void calcPrime(int m, int n);
//int main()
//{
//	int m, n;
//	
//
//	cin >> m;
//	cin >> n;
//	calcPrime(m, n);
//	
//}
//void calcPrime(int m, int n)
//{
//	int count = 0; // ������������ ���� ����
//	int primeCount = 0;  // �Ҽ� ����
//	int sum = 0, min;  // ��, �Ҽ� �ּڰ�
//
//	for (int i = m; i <= n; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			if (i % j == 0)
//				count++;
//		}
//
//		if (count == 2)
//		{
//			primeCount++;
//			sum += i;
//
//			if (primeCount == 1)
//				min = i;
//		}
//		count = 0;
//	}
//	if (primeCount == 0)
//	{
//		cout << "-1" << endl;
//	}
//	else
//	{
//		cout << sum << endl << min << endl;
//	}
//}
