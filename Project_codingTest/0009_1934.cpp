//#include <iostream>
//
//using namespace std;
//
//int getGCD(int, int);
//int getLCM(int, int, int gcd);
//int main()
//{
//	int caseCount, num1, num2;
//	cin >> caseCount;
//
//	while (caseCount--)
//	{
//		cin >> num1 >> num2;
//
//		if (num2 > num1)
//		{
//			int temp = num1;
//			num1 = num2;
//			num2 = temp;
//		}
//
//		cout << getLCM(num1, num2, getGCD(num1, num2)) << endl;
//	}
//	
//}
//
//// �ִ����� (GCD : greatest common divisor)
//int getGCD(int num1, int num2) 
//{
//	if (num2 == 0)
//		return num1;
//
//	return getGCD(num2, num1 % num2);
//}
//
//// �ּҰ���� (LCM : lowest common multiple)
//int getLCM(int num1, int num2, int gcd)
//{
//	return num1 * num2 / gcd;
//}