//#include <iostream>
//using namespace std;
//
//long long getMin(long long num1, long long num2);
//int main()
//{
//	long long x, y;
//	cin >> x >> y;
//	long long w, s;
//	cin >> w >> s;
//	long long case1, case2, case3;
//	long long mod = (x + y) % 2;
//	// x �� ū ����
//	if (x < y)
//	{
//		long long temp = x;
//		x = y;
//		y = temp;
//	}
//
//	// �������θ� �̵��� ��
//	case1 = (x + y) * w;
//
//	// �밢���� ���������� �̵� �� ������ �밢���̵� 
//	case2 = (x - y) * w + y * s;
//
//	// �밢�� ������ �̵� ����
//	if ((x + y) % 2 == 0)
//	{
//		case3 = x * s;
//	}
//	// �밢���� ������ �������� �̵�����
//	else
//	{
//		// 1ĭ �̵�
//		x -= 1;
//		case3 = x * s + w;
//	}
//
//	
//	
//	long long result = getMin(case1, getMin(case2, case3));
//
//	cout << result;
//
//}
//
//long long getMin(long long num1, long long num2)
//{
//	if (num1 > num2) return num2;
//	return num1;
//}