//#include <iostream>
//using namespace std;
//
//int main()
//{
//	// ù° �ٿ� �ع��̰� ������ �ִ� �� ���� �� e, 
//	// �׳� �߰��� �� ���� �� f, 
//	// �� ������ �ٲٴµ� �ʿ��� �� ���� ���� c�� �־�����.
//	int e, f, c;
//	
//	cin >> e >> f >> c;
//
//	int result = (e + f) / c;
//	int empty = result + (e + f) % c;
//	while (1)
//	{
//		if (empty / c == 0) break;
//		result += empty / c;
//		empty = (empty / c) + empty % c;
//	}
//	
//	cout << result;
//}