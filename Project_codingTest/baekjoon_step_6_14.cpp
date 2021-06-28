//#include <iostream>
//#include <vector>
//using namespace std;
//
//bool isDivided(vector <int> lengthVec, long long length, int n);
//int binarySearch(vector <int> lengthVec, int target, int min, int max, int n);
//int main()
//{
//	int k = 0, n = 0, result = 1;
//	vector <int> lengthVec(n);
//
//	cin >> k >> n;
//
//	while (k--)
//	{
//		int x = 0;
//		cin >> x;
//		lengthVec.push_back(x);
//	}
//
//	cout << binarySearch(lengthVec, result, 0, 10000000000, n);
//
//
//}
//
//bool isDivided(vector <int> lengthVec, long long length, int n)
//{
//	int count = 0; // ���� �� ����
//	for (int i = 0; i < lengthVec.size(); i++)
//	{
//		count += lengthVec[i] / length; // ���� ���� �ջ�
//	}
//
//	if (count < n) //�Ұ���
//	{
//		return false;
//	}
//	else return true;
//}
//
//int binarySearch(vector <int> lengthVec, int target, int min, int max, int n)
//{
//	while (min <= max)
//	{
//		int mid = (min + max) / 2; // mid ����
//		if (isDivided(lengthVec, mid, n)) // �߰����� target�̸�
//		{
//			if (target < mid)
//			{
//				target = mid;
//			}
//			min = mid + 1;
//		}
//		else
//		{
//			max = mid - 1;
//		}
//	}
//	return target;
//}