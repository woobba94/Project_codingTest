//#include <iostream>
//#include <vector>
//using namespace std;
//
//// �Լ��� �Ű������� ���̱� ���� �������� ����
//vector <vector<int>> worker;
//vector <int> available(1001, 0);
//vector<bool> check(1001, false);
//
//
//bool func(int x);
//int main(int argc, char* argv[])
//{
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	int n, m;
//	int count = 0;
//	
//	cin >> n >> m;
//
//	for (int i = 1; i <= n; ++i) 
//	{
//		int num;
//		cin >> num;
//		for (int j = 0; j < num; ++j)
//		{
//			int temp;
//			cin >> temp;
//			worker[i].push_back(temp);
//		}
//	}
//
//	// �̺� ��Ī
//	for (int i = 1; i <= n; ++i) 
//	{
//		// �� �ΰ����� ����
//		for (int j = 1; j <= 2; ++j) 
//		{
//			if (func(i) == true) 
//			{
//				count++;
//			}
//		}
//	}
//
//	cout << count << endl;
//
//	return 0;
//}
//
//bool func(int num)
//{
//	for (int i = 0; i < worker[num].size(); ++i)
//	{
//		int work = worker[num][i];
//		// ���� �̹� ��Ī�� ��� continue
//		if (check[work]) 
//		{
//			continue;
//		}
//		check[work] = true;
//
//		// ���� �ƹ��� ��Ī�Ǿ����� ���� 
//		// �Ǵ� ������ ���� �� �ܿ� �ٸ� ���� �� �� �ִ� ��� ã��
//		if (available[work] == 0 || func(available[work] == true)) 
//		{
//			available[work] = num;
//			return true;
//		}
//	}
//	return false;
//}