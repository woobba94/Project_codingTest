//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	int temp = n;
//	int count = 0;
//	// �ڸ��� (count) �̱�
//	while (temp)
//	{
//		temp /= 10;
//		count++;
//	}
//	// �ִ밪 = count
//	int result = count;
//
//	// checkNum �̱�
//	int checkNum = 0;
//	int k = 1;
//	while (count--)
//	{
//		checkNum += k;
//		k *= 10;
//	}
//
//	if (n < checkNum)
//		cout << result - 1;
//	else
//		cout << result;
//}