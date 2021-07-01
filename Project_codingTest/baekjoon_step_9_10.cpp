//#include <iostream>
//#include <deque>
//
//using namespace std;
//
//void func(deque <pair<int, int>> que, int n, int m);
//int findMin(deque <pair<int, int>> que);
//int findMax(deque <pair<int, int>> que);
//int main()
//{
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//
//	int caseCount, n, m;
//    cin >> caseCount;
//    deque <pair<int, int>> que; // ���� pair �� ť ����. 
//
//	for (int i = 0; i < caseCount; i++)
//	{
//		cin >> n >> m;
//		func(que, n, m);
//	}
//}
//
//void func(deque <pair<int, int>> que, int n, int m)
//{
//	int result = 0;
//	for (int j = 0; j < n; j++)
//	{
//		int tmp;
//		cin >> tmp;
//		pair<int, int> p(tmp, j);
//		que.push_back(p);
//	}
//	int min = findMin(que);
//	int max = findMax(que);
//	int count = 0;
//	while (true) 
//	{
//		// �ּڰ��� �ִ��� ������ �켱���� ����
//		if (min == max) break;
//
//		// �ӽ� ������ ù��° ť ���� 
//		pair <int, int> tmp = que.front();
//		// ù��° ť ��
//		que.pop_front();
//		// ������ �켱������ �ִ�
//		if (tmp.first == max)
//		{
//			count++;
//			// �ִ� ����
//			max = findMax(que);
//			// �켱���� �ִ�鼭 �ε����� m�̸�
//			if (tmp.second == m)
//			{
//				result = count;
//			}
//		}
//		else 
//		{
//			que.push_back(tmp);
//		}
//	}
//	for (int j = 0; j < que.size(); j++)
//	{
//		count++;
//		int tmp = que.at(j).second;
//		// j��° �켱������ �ε����� m�̶� ������ �μ�
//		if (tmp == m) {
//			result = count;
//			break;
//		}
//	}
//	cout << result << endl;
//    
//}
//
//int findMin(deque <pair<int, int>> que) 
//{
//	int min = 10;
//	for (int i = 0; i < que.size(); i++) 
//	{
//		int tmp = que.at(i).first;
//		if (tmp <= min) 
//		{
//			min = tmp;
//		}
//	}
//	return min;
//}
//
//int findMax( deque <pair<int, int>> que) 
//{
//	int max = 0;
//	for (int i = 0; i < que.size(); i++) 
//	{
//		int tmp = que.at(i).first;
//		if (tmp >= max) 
//		{
//			max = tmp;
//		}
//	}
//	return max;
//}