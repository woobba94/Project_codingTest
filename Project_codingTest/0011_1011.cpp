//#include <iostream>
//
//using namespace std;
//int calcMinCount(int start, int end);
//int main()
//{
//	int caseCount, start, end;
//
//	cin >> caseCount;
//
//	while (caseCount--)
//	{
//		cin >> start >> end;
//		cout << calcMinCount(start, end) << endl;
//	}
//}
//
//int calcMinCount(int start, int end)
//{
//	// 1�� �̵��� ���·� �ʱ�ȭ
//	int count = 1;
//	int distance = 1;
//	while (distance < end - start)
//	{
//		// k + 1 ���� �̵�����
//		if ((distance + distance + 1) < end - start)
//		{
//			distance += (distance + 1);
//			count++;
//		}
//		// k ���� �̵�����
//		else if ((distance + distance) < end - start)
//		{
//			distance += distance;
//			count++;
//		}
//		// k - 1 ���� �̵�����
//		else if ((distance + distance - 1) < end - start)
//		{
//			distance += (distance - 1);
//			count++;
//		}
//		// �Ұ��� -> 1���⸸ �̵�
//		else
//		{
//			distance += 1;
//			count++;
//		}
//	}
//	return count;
//}