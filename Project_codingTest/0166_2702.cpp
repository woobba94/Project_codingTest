//#include <iostream>
//using namespace std;
//
//int getGCD(int a, int b);
//int main()
//{
//	int caseCount;
//	cin >> caseCount;
//	int a, b;
//
//	while (caseCount--)
//	{
//		cin >> a >> b;
//		cout << a * b / getGCD(a, b) << " " << getGCD(a, b) << endl;
//	}
//}
//
//// �ִ�����
//int getGCD(int a, int b)
//{
//	if (b == 0) return a;
//
//	return getGCD(b, a % b);
//}