//#include <iostream>
//using namespace std;
//
//
//int main()
//{
//	int n;
//	cin >> n;
//	pair<int, int>* arr = new pair<int, int>[n];
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i].first >> arr[i].second;
//	}
//
//	// �ϵ����� ����
//	int result = 1;
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			// ������, Ű �Ѵ� ������
//			if (arr[i].first < arr[j].first && arr[i].second < arr[j].second)
//			{
//				// ��� �϶�
//				result++;
//			}
//		}
//		cout << result << " ";
//		result = 1;
//	}
//}