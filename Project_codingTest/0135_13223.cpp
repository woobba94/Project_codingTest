//#include <iostream>
//using namespace std;
//
//int getSec(char arr[]);
//void print(int num);
//bool checkDigit(int num);
//
//int main()
//{
//	// ����ð�
//	char now[9] = {};
//	cin >> now;
//	
//	//��ǥ�ð�
//	char target[9] = {};
//	cin >> target;
//	int needTime = 0;
//
//	if(getSec(now) > getSec(target))
//		needTime = 86400 - getSec(now) + getSec(target);
//	else
//		needTime = getSec(target) - getSec(now);
//	
//	int hourCount = 0;
//	int minuteCount = 0;
//	int secondCount = 0;
//	while (1)
//	{
//		// 1�ð� �̻�
//		if (needTime >= 3600)
//		{
//			hourCount = needTime / 3600;
//			needTime %= 3600;
//		}
//		// 1�ð� ���� 1���̻�
//		else if (needTime >= 60)
//		{
//			minuteCount = needTime / 60;
//			needTime %= 60;
//		}
//		else
//		{
//			secondCount = needTime;
//			break;
//		}
//	}
//	print(hourCount);
//	cout << ':';
//	print(minuteCount);
//	cout << ':';
//	print(secondCount);
//	cout << endl;
//}
//
//void print(int num)
//{
//	if (checkDigit(num))cout << num;
//	else cout << '0' << num;
//}
//
//// �ڸ��� üũ : ���ڸ��� true��ȯ
//bool checkDigit(int num)
//{
//	if (num / 10 == 0) return false;
//	else return true;
//}
//
//int getSec(char arr[])
//{
//	int result = 0;
//
//	int hour = 0, minute = 0, second = 0;
//	int k = 10;
//	for (int i = 0; i < 2; i++)
//	{
//		hour += (arr[i] - '0') * k;
//		k /= 10;
//	}
//	k = 10;
//	for (int i = 3; i < 5; i++)
//	{
//		minute += (arr[i] - '0') * k;
//		k /= 10;
//	}
//	k = 10;
//	for (int i = 6; i < 8; i++)
//	{
//		second += (arr[i] - '0') * k;
//		k /= 10;
//	}
//
//	result = hour * 3600 + minute * 60 + second;
//
//	return result;
//}