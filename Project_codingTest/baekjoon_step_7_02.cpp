//#include <iostream>
//#include <vector>
//using namespace std;
//
//void sortForEnd(vector <vector<int>>& timeTables);
//int counting(vector <vector<int>>& timeTables);
//int main()
//{
//	int n = 0; // (1 �� N �� 100,000)
//	int i = 0;
//	cin >> n;
//	vector <vector<int>> timeTables(n);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < 2; j++)
//		{
//			int input = 0;
//			cin >> input;
//			timeTables[i].push_back(input);
//		}
//	}
//	sortForEnd(timeTables);
//	cout << counting(timeTables);
//}
//void sortForEnd(vector <vector<int>>& timeTables)
//{
//	vector <int> temp;
//	for (int i = 0; i < timeTables.size(); i++)
//	{
//		for (int j = 0; j < timeTables.size() - 1; j++)
//		{
//			if (timeTables[j][1] > timeTables[j + 1][1]) // ����ð� ���� ����
//			{
//				temp = timeTables[j];
//				timeTables[j] = timeTables[j + 1];
//				timeTables[j + 1] = temp;
//			}
//			else if (timeTables[j][1] == timeTables[j + 1][1]) // ����ð� ������ ���۽ð� ��������
//			{
//				if (timeTables[j][0] > timeTables[j + 1][0])
//				{
//					temp = timeTables[j];
//					timeTables[j] = timeTables[j + 1];
//					timeTables[j + 1] = temp;
//				}
//			}
//		}
//	}
//}
//int counting(vector <vector<int>>& timeTables)
//{
//	int time = timeTables[0][1]; // ������ �� �ð� ����
//	int count = 1; // ȸ�ǽ� ���� �ּ� 1��
//	for (int i = 0; i < timeTables.size(); i++)
//	{
//		if (time <= timeTables[i][0])
//		{
//			count++;
//			time = timeTables[i][1]; // ���� ����
//		}
//	}
//	return count;
//}