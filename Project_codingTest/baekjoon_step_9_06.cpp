//#include <iostream>
//#include <vector>
//#include <stack>
//
//using namespace std;
//
//void func(vector <int> vec, vector <int>& result, stack <int> num);
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	int n;
//	cin >> n;
//
//	stack <int> num;	
//	vector <int> vec;
//	vector <int> result(n, -1);
//
//	// �Է¹ޱ�
//	for (int i = 0; i < n; i++) {
//		int temp = 0;
//		cin >> temp;
//		vec.push_back(temp);
//	}
//	
//	func(vec, result, num);
//
//	for (int i = 0; i < result.size(); i++)
//	{
//		cout << result[i] << " ";
//	}
//	cout << endl;
//}
//
//void func(vector <int> vec, vector <int>& result, stack <int> num)
//{
//	for (int i = 0; i < vec.size(); i++) 
//	{
//		// ������ ������� �ʰ� && vec[���� ����� �ε���] < vec[i] �̸�
//		while (num.empty() == false && vec[num.top()] < vec[i])
//		{
//			// ����� �ε������ٰ� vec[i] ���� ����
//			result[num.top()] = vec[i];
//			// pop���� ����
//			num.pop();
//		}
//		// ���� �ε��� ����
//		num.push(i);
//	}
//}