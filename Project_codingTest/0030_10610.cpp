//#include <iostream>
//
//using namespace std;
//const int MAX_SIZE = 100000;
//
//void inputCharArr(char* (&numArr), int& size, int input);
//void sortDown(char* (&numArr), int size);
//int main(void)
//{
//	char* numArr = new char [MAX_SIZE];
//	int input;
//	int size = 0;
//	bool existZero = false;
//	cin >> input;
//
//	// ���� ���ڸ� char�迭�� �Ѱ��� ����
//	inputCharArr(numArr, size, input);
//
//
//	long long sum = 0;
//
//	for (int i = 0; i < size; i++)
//	{
//		// �� �ڸ��� ��
//		sum += int(numArr[i]);
//		// 0 ���� üũ
//		if (int(numArr[i]) == 0)
//		{
//			existZero = true;
//		}
//	}
//	// �� �ڸ����� ���� 3�� ����� �ƴϰų� 0�� ���ٸ�
//	if (sum % 3 != 0 || existZero == false)
//	{
//		cout << -1 << endl;
//	}
//	else
//	{
//		sortDown(numArr, size);
//		for (int i = 0; i < size; i++)
//		{
//			cout << int(numArr[i]);
//		}
//		
//	}
//}
//void inputCharArr(char* (&numArr), int& size, int input)
//{
//	int div = 10;
//	int temp = 0;
//	int i = 0;
//	while (input != 0)
//	{
//		temp = input % div;
//		input /= 10;
//		numArr[i] = temp;
//		i++;
//		size++;
//	}
//}
//
//// ��������
//void sortDown(char* (&numArr), int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size - 1; j++)
//		{
//			if (numArr[j] < numArr[j + 1])
//			{
//				char temp = numArr[j];
//				numArr[j] = numArr[j + 1];
//				numArr[j + 1] = temp;
//			}
//		}
//	}
//}