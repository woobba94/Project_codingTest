//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int a, b, v;
//	cin >> a >> b >> v;
//	// a : up
//	// b : down
//	// v : leng
//
//	int speed = a - b;
//	int distance = v - a;
//	// �ð� = �Ÿ� / �ӷ�
//	int date = distance / speed;
//
//	// �� �°� �ö󰡸� ������ ��ħ�� a��ŭ �̵�(date += 1)
//	if (distance % speed == 0)
//	{
//		date += 1;
//	}
//	else // �Ϸ� �� �ö� ��(date += 1) ������ ��ħ a��ŭ �̵�(date += 1)
//	{
//		date += 2;
//	}
//
//	cout << date;
//}