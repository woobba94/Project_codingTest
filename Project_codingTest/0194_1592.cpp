//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n, m, l;
//	cin >> n >> m >> l;
//
//	int* arr = new int[n]();
//	int count = -1;
//	int index = 0;
//	while (1)
//	{
//		// ������
//		arr[index]++;
//		count++;
//		if (arr[index] < m)
//		{
//			// ���� Ƚ���� ¦���� ��
//			if (arr[index] % 2 == 0)
//			{
//				// �ݴ� l ��°��
//				index -= l;
//				if (index < 0)
//				{
//					index += n;
//				}
//			}
//			else
//			{
//				index += l;
//				if (n - 1 < index)
//				{
//					index -= n;
//				}
//			}
//		}
//		else
//		{
//			cout << count;
//			break;
//		}
//	}
//}