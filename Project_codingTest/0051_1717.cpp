//#include <iostream>
//
//using namespace std;
//
///*
//<find �Լ�>
//���ڸ� �ް� ���� �θ� ã��(���)
//ex) 7�� ������ -> 5 -> 5�� �θ�˻� -> 2 -> 2�� �θ�˻� -> 1
//	=> �����θ� 1
//
//
//<union �Լ�>
//�տ��� ������ �����θ� ���ϰ�(�� ���� �θ� ��) ����
//5�� �θ� 3, 7�� �θ� 5
//7 �� �θ� 3 ���� ����
//
//	=> 5�� 7�� �θ� 3���� ������ -> ���� �׷��� (���� ����)
//
//*/
//
//void calcUnion(int* (&num), int a, int b);
//int getParent(int* num,int a);
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	int n, m;
//	cin >> n >> m;
//	int* num = new int[n + 1];
//
//	// �� �θ� �ڱ��ڽ����� �ʱ�ȭ
//	for (int i = 0; i < n + 1; i++)
//	{
//		num[i] = i;
//	}
//
//	while (m--)
//	{
//		int t, a, b;
//		cin >> t >> a >> b;
//
//		if (t == 0)
//		{
//			calcUnion(num, a, b);
//		}
//		else
//		{
//			// �θ� ������ ��������
//			if (getParent(num, a) == getParent(num, b)) cout << "YES\n";
//			else cout << "NO\n";
//		} 
//	}
//}
//
//// �θ� ��ħ
//void calcUnion(int* (&num), int a, int b)
//{
//	// �θ� ��������
//	a = getParent(num, a);
//	b = getParent(num, b);
//
//	// �� �����θ� �ѱ�
//	if (a < b) num[b] = a;
//	else num[a] = b;
//}
//
//// ���� �θ� ã��
//int getParent(int* num, int a)
//{
//	// �θ� �ڱ��ڽ� -> ����
//	if (num[a] == a) return a;
//	
//	else
//	{
//		// �θ� = �θ��� �θ�
//		num[a] = getParent(num, num[a]);
//	}
//
//	return num[a];
//}