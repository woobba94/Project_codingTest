//#include <iostream>
//#include <deque>
//
//using namespace std;
//
//void func(deque <pair<int, int>> &que, int num, int &count);
//void moveLeft(deque <int>& que);
//void moveRight(deque <int>& que);
//int main()
//{
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//
//    int n, m, count = 0;
//    cin >> n >> m;
//    deque <pair<int, int>> que; // ������ deque ����. 
//    // ť �� �ʱ�ȭ 1~n
//    for (int i = 1; i <= n; i++)
//    {
//        pair<int, int> temp = { i, i - 1 };
//        que.push_back(temp);
//    }
//    for (int i = 0; i < m; i++)
//    {
//        int num;
//        cin >> num;
//        func(que, num, count);
//    }
//    cout << count;
//}
//void moveLeft(deque <pair<int, int>> &que)
//{
//    que.push_back(que.front());
//    que.pop_front();
//    // back ���� �ε��� -1
//    for (int i = 0; i < que.size() - 1; i++)
//    {
//        que[i].second--;
//    }
//    que.back().second = que.size() - 1;
//}
//
//void moveRight(deque <pair<int, int>> &que)
//{
//    que.push_front(que.back());
//    que.pop_back();
//    // front ���� �ε��� +1
//    for (int i = 1; i < que.size(); i++)
//    {
//        que[i].second++;
//    }
//    que.front().second = 0;
//}
//
//void func(deque <pair<int, int>> &que, int num, int &count)
//{
//    bool flag = false; // �ε��� ���� ����
//    bool leftFlag = false;
//    while (true)
//    {
//        // ���� ���̸� count �״��
//        // pop�ϸ� �ε��� ���� -1
//        // -> �������� �ű� �� �� �ڿ��� pop
//        if (num == que.front().first)
//        {
//            moveLeft(que);
//            que.pop_back();
//            return;
//        }
//        // �Է� ���� �ε��� ã��
//        // ���ڸ��� �ѹ��� ����
//        int index = 0;
//        if (flag == false)
//        {
//            
//            for (int i = 0; i < que.size(); i++)
//            {
//                if (que.at(i).first == num)
//                {
//                    index = que.at(i).second;
//                    flag = true;
//                    break;
//                }
//            }
//            // �߾ӱ��� �����̸� �������� �̵��غ�
//            if (index <= que.size() / 2)
//            {
//                leftFlag = true;
//            }
//        }
//        if (leftFlag == true)
//        {
//            moveLeft(que);
//            count++;
//        }
//        else
//        {
//            moveRight(que);
//            count++;
//        }
//    }
//}