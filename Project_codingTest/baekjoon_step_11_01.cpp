//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//bool func(vector <vector<int>> worker, vector<int> available, vector<bool> check, int num);
//int main(void)
//{
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	vector <vector<int>> worker(1001);
//	vector<int> available(1001, 0);
//	vector<bool> check(1001, false);
//
//	int n, m;
//	int count = 0;
//
//	cin >> n >> m;
//
//	for (int i = 1; i <= n; i++)
//	{
//		int num;
//		cin >> num;
//		for (int j = 0; j < num; j++)
//		{
//			int temp;
//
//			cin >> temp;
//			worker[i].push_back(temp);
//		}
//	}
//
//	//�̺и�Ī
//	for (int i = 1; i <= n; i++)
//	{
//		if (func(worker, available, check, i) == true)
//		{
//			count++;
//		}
//	}
//
//	cout << count << endl;
//
//	return 0;
//}
//
//bool func(vector <vector<int>> worker, vector<int> available, vector<bool> check, int num)
//{
//
//	for (int i = 0; i < worker[num].size(); i++)
//	{
//		int work = worker[num][i];
//
//		// ���� �̹� ��Ī�� ��� continue
//		if (check[work])
//		{
//			continue;
//		}
//
//		check[work] = true;
//
//		// ���� �ƹ��� ��Ī�Ǿ����� ���� 
//		// �Ǵ� ������ ���� �� �ܿ� �ٸ� ���� �� �� �ִ� ��� ã��
//		if (available[work] == 0 || func(worker, available, check, available[work]) == true)
//		{
//			available[work] = num;
//			return true;
//		}
//	}
//	return false;
//}