//#include <iostream>
//using namespace std;
//
////n�� 10 ������ �� ��밡���� ���װ�� �˰���
//int cal(int n, int k);
//int main()
//{
//	int n = 0, k = 0;
//
//	cin >> n >> k;
//
//	cout << cal(n, k);
//}
//
//int cal(int n, int k)
//{
//	// k�� 0�̰ų� n�� ���ٸ� ������ 1
//	if (k == 0 || k == n) return 1;
//	else
//	{
//		return cal(n - 1, k) + cal(n - 1, k - 1);
//	}
//}