//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	bool* isRetire = new bool[n]{};
//
//	for(int i = 0; i < n; i++)
//	{
//		int flag = true;
//		// ��� �ӽ� ���� �迭
//		int arr[11] = {};
//		for (int j = 1; j <= 10; j++)
//		{
//			int answer = ((j - 1) % 5) + 1;
//			cin >> arr[j];
//			// �ѹ����� Ʋ���� ��� x
//			if (arr[j] != answer)
//			{
//				flag = false;
//			}
//		}
//		// �����̸� ��� -> �����
//		if (flag == true)
//		{
//			isRetire[i] = true;
//		}
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		if (isRetire[i] == true)
//			cout << i + 1 << endl;
//	}
//}