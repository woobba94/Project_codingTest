//#include <iostream>
//#include <deque>
//#include <string>
//
//using namespace std;
//
//int func(deque <int> que, int n);
//int main()
//{
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    int n;
//    cin >> n;
//
//    deque<int> que; // ������ ť ����.
//
//    cout << func(que, n);
//}
//
//int func(deque <int> que, int n)
//{
//    int result = -1;
//
//    // n���� 1���� ī�����
//    for (int i = n; i > 0; i--)
//    {
//        que.push_back(i);
//    }
//
//
//    while (true)
//    {
//        // ī�尡 ������ ����
//        if (que.empty() == true)
//        {
//            return result;
//        }
//        else
//        {
//            // ī�尡 ���� �̻��϶�
//            if (que.size() > 1)
//            {
//                // ���� �ִ�ī�� ����
//                que.pop_back();
//                // �Ʒ� ��ġ�� ���� ī�� ����
//                que.push_front(que.back());
//                // ���� ī�� ����
//                que.pop_back();
//            }
//            else
//            {
//                result = que.front();
//                return result;
//            }
//        }
//    }
//}