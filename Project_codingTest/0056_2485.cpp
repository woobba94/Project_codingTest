//#include <iostream>
//
//using namespace std;
//
//int getGCD(int a, int b);
//
//int main() {
//
//	int gcd = 0;
//	int n; // �ɾ��� ���μ��� �� (3 �� N �� 100,000)
//	cin >> n;
//
//	int* tree = new int[n];
//
//	// ���� ���μ� ��ġ �Է�
//	for (int i = 0; i < n; i++)
//	{
//		cin >> tree[i];
//	}
//
//	//// ���μ��� 3�����
//	//if (n == 3) 
//	//{
//	//	gcd = getGCD(arr[1] - arr[0], arr[2] - arr[1]);
//	//}
//	//else
//	//{
//	//	for (int i = 2; i < n - 1; i++)
//	//	{
//	//		gcd = getGCD(gcd, arr[i + 1] - arr[i]);
//	//	}
//	//}
//
//	// �Ÿ� ���� �ִ�����
//	gcd = getGCD(tree[1] - tree[0], tree[2] - tree[1]);
//
//	for (int i = 2; i < n - 1; i++) 
//	{
//		// �Ÿ����� �ִ������� 
//		// ���� �Ÿ����� �ִ������� �ִ�����
//		// getGDC(�Ÿ��� �ִ�����)
//		gcd = getGCD(gcd, tree[i + 1] - tree[i]);
//	}
//
//	// ó���� ���������μ� �Ÿ� / �� �Ÿ� ���� �ִ�����
//	int result = ((tree[n - 1] - tree[0]) / gcd) + 1;
//
//	// ���������� �̹� ���� ���μ� �� ����
//	result -= n;
//
//	cout << result;
//}
//
//int getGCD(int a, int b) 
//{
//	// ū �� ������
//	if (a < b)
//	{
//		int temp = a;
//		a = b;
//		b = temp;
//	}
//
//	if (b == 0) return a;
//
//	return getGCD(b, a % b);
//}