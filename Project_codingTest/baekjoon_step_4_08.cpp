//#include <iostream>
//using namespace std;
//
//bool isPrime(int num);
//
//int main()
//{
//	cout << "[M�̻� N������ �Ҽ��� ���� ��� �� �հ� �ּڰ� ���ϱ�]" << endl;
//	int m, n, min, sum = 0;
//	cout << "m�Է�: ";
//	cin >> m;
//	cout << "n�Է�: ";
//	cin >> n;
//	min = m;
//
//	for (int i = m; i <= n; i++) 
//	{
//		if (isPrime(i) == true)
//		{
//			sum += i;
//			if (min == m || min >= i)min = i;
//		}
//	}
//
//	if (sum == 0)
//	{
//		cout << -1;
//	}
//	else
//	{
//		cout << "�� : " << sum << endl;
//		cout << "�ּڰ� : " << min;
//	}
//}
//
//bool isPrime(int num) {
//	if (num <= 1) 
//	{
//		return false;
//	}
//	//�Ҽ� ������ 2���� ũ�鼭 �ڱ� �ڽ��� �����ٱ����� ���� �������� �ʴ� ��
//	for (int i = 2; i <= sqrt(num); i++) 
//	{
//		if (num % i == 0) //��������
//		{
//			return false;
//		}
//	}
//	return true;
//}