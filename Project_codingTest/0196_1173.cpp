//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n, min, max, up, down;
//
//	cin >> n >> min >> max >> up >> down;
//
//	// �ʱ� �ƹ� min
//	int heart = min;
//	int time = 0;
//
//	if (min + up > max)
//	{
//		cout << -1;
//	}
//	else
//	{
//		while (n)
//		{
//			time++;
//			// �
//			if (heart + up <= max)
//			{
//				n--;
//				heart += up;
//			}
//			// �޽�
//			else
//			{
//				heart -= down;
//				if (heart < min)
//					heart = min;
//			}
//		}
//		cout << time;
//	}
//}