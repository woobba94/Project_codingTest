//#include <iostream>
//using namespace std;
//
//int calc(int n);
//bool check(int target);
//
//int main()
//{
//	int n;
//	cin >> n;
//
//	cout << calc(n);
//}
//
//int calc(int n)
//{
//	int result = 0;
//	int target = 666;
//
//	// Ƚ�� ��� �����Ǹ� �ش� target ��ȯ
//	while (n)
//	{
//		// target�� 666�� ���Ե� ���ڸ�
//		if (check(target) == true)
//		{
//			result = target;
//
//			// Ƚ�� ����
//			n--;
//		}
//		target++;
//	}
//
//	return result;
//}
//
//bool check(int target)
//{
//	while (666 <= target)
//	{
//		// 666 �� ���ӵǴ��� Ȯ��
//		if (target % 1000 == 666)
//		{
//			return true;
//		}
//		// 10���� �������鼭
//		target /= 10;
//	}
//	return false;
//}