//#include <iostream>
//
//using namespace std;
//long long getGCD(long long num1, long long num2);
//int main() {
//	long long a, b;
//	long long gcd;
//	cin >> a >> b;
//
//	gcd = getGCD(a, b);
//
//	// �ִ�������ŭ 1 ���
//	while (gcd--)
//	{
//		cout << 1;
//	}
//}
//
//long long getGCD(long long num1, long long num2)
//{
//	// ū �� ������
//	if (num2 > num1)
//	{
//		long long temp = num1;
//		num1 = num2;
//		num2 = temp;
//	}
//
//	if (num2 == 0) return num1;
//
//	return getGCD(num2, num1 % num2);
//}
//
