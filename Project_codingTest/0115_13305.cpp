//#include <iostream>
//using namespace std;
//
//int n = 0; // ���� ����
//
//int getMinCity(int* price, int start, int end);
//long long getSumPrice(int* price, int* distance, int start, int end);
//int main()
//{
//	cin >> n;
//
//	// �� ���� �⸧��
//	int* price = new int[n];
//
//	// ���� ���� �Ÿ�
//	int* distance = new int[n - 1];
//
//	// �Ÿ� �Է�
//	for (int i = 0; i < n - 1; i++)
//	{
//		cin >> distance[i];
//	}
//
//	// �⸧�� �Է�
//	for (int i = 0; i < n; i++)
//	{
//		cin >> price[i];
//	}
//	// �� ���
//	long long result = 0;
//	int minCity = 0;
//	int end = n;
//
//	// ���� �Ÿ� ��
//	int count = n - 1;
//
//	while (0 < count)
//	{
//		minCity = getMinCity(price, 0, end);
//
//		count = end - minCity;
//
//		result += getSumPrice(price, distance, minCity, end);
//
//		end = minCity;
//	}
//
//	cout << result;
//
//}
//
//// start ���� �⸧ ä�� �� end ���� ��� ����
//long long getSumPrice(int* price, int* distance, int start, int end)
//{
//	long long sumDistance = 0;
//	long long sumPrice = 0;
//	if (end - start == 1)
//	{
//		sumPrice = distance[start] * price[start];
//		return sumPrice;
//	}
//
//	for (int i = start; i < end - 1; i++)
//	{
//		sumDistance += distance[i];
//	}
//
//	sumPrice = sumDistance * price[start];
//
//	return sumPrice;
//}
//
//
//// start ���� end ���� �� ���� �� ���� ����
//int getMinCity(int* price, int start, int end)
//{
//	int minPrice = 1000000000; // �ִ� 10��
//	int minCity = 0;
//	for (int i = start; i < end - 1; i++)
//	{
//		if (minPrice > price[i])
//		{
//			minPrice = price[i];
//			minCity = i;
//		}
//	}
//
//	return minCity;
//}