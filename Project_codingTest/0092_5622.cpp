//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int data[26] = { 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10 };
//	int sum = 0;
//
//	char arr[51]; // ���ڿ� ���� 50����
//
//	cin >> arr;
//
//	for (int i = 0; i < 51; ++i) 
//	{
//		// �����ڸ� break
//		if (arr[i] == '\0') break;
//
//		// �빮�� A�� ASCII����
//		sum += data[arr[i] - 65];
//	}
//
//	cout << sum << endl;
//}