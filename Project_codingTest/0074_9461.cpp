//#include <iostream>
//using namespace std;
//
//long long dataArr[101] = { 0, 1, 1, 1, }; // 1~3 �̸� 1�� �ʱ�ȭ
//void setData();
//int main()
//{
//	int testCase = 0;
//	cin >> testCase;
//	setData();
//	while (testCase--)
//	{
//		int n;
//		cin >> n;
//		cout << dataArr[n] << endl;
//	}
//}
//
//void setData()
//{
//	// �ʱⰪ ����
//	// dataArr[1~3] = 1
//	dataArr[4] = 2;
//	dataArr[5] = 2;
//
//	for (int i = 6; i < 101; i++)
//	{
//		dataArr[i] = dataArr[i - 1] + dataArr[i - 5];
//	}
//}