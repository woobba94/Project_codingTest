//#include <iostream>
//
//using namespace std;
//
//int calc(int num);
//int main()
//{
//	bool isExist = false;
//	int num;
//	cin >> num;
//
//	// �ּ� ������ : 1���� �����ϸ� Ž��
//	for (int i = 1; i < num; i++)
//	{
//		if (num == (i + calc(i)))
//		{
//			cout << i;
//			isExist = true;
//			break;
//		}
//	}
//	if (isExist == false) cout << 0;
//}
//
//// �� �ڸ����� �� ��ȯ
//int calc(int num)
//{
//	int result = 0;
//
//	while (num)
//	{
//		result += num % 10;
//		num /= 10;
//	}
//
//	return result;
//}