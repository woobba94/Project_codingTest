//#include <iostream>
//using namespace std;
//
//int main()
//{
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//
//	int w, h;
//	cin >> w >> h;
//
//	int p, q;
//	cin >> p >> q;
//
//	int t;
//	cin >> t;
//
//	// ù ��ǥ ����
//	int startP = p;
//	int startQ = q;
//
//	// ���� ��������� �ʱ�ȭ
//	bool isRight = true;
//	bool isUp = true;
//
//	int cycleX = w * 2;
//	int cycleY = h * 2;
//
//	int tx = t % cycleX;
//	int ty = t % cycleY;
//
//	while (tx--)
//	{
//		// x���� ����
//		if (p == w)
//		{
//			isRight = false;
//		}
//		else if (p == 0)
//		{
//			isRight = true;
//		}
//
//		if (isRight == true)
//			p++;
//		else
//			p--;
//	}
//	while (ty--)
//	{
//		// y ���� ����
//		if (q == h)
//		{
//			isUp = false;
//		}
//		else if (q == 0)
//		{
//			isUp = true;
//		}
//
//		if (isUp == true)
//			q++;
//		else
//			q--;
//	}
//
//	cout << p << " " << q;
//}