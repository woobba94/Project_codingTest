//#include <stdio.h>
//#include <iostream>
//#include <queue>
//#include <vector>
//
//using namespace std;
//
//
//struct comp {
//    bool operator()(int x, int y)
//    {
//        if (abs(x) == abs(y)) // ���� ������ 
//        {
//            return x > y;
//        }
//        else
//        {
//            return abs(x) > abs(y);
//        }
//    }
//};
//void func(priority_queue<int, vector<int>, comp>& que, int num);
//
//int main() 
//{
//    
//
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    priority_queue <int, vector<int>, comp> que; // int�� �켱���� ť ����
//    int n;
//    cin >> n;
//    while (n--) 
//    { 
//        int x;
//        cin >> x;
//        func(que, x);
//    }
//    return 0;
//}
//
//void func(priority_queue <int, vector<int>, comp> &que, int num)
//{
//    if (num == 0) // �ִ� ��� ���
//    {
//        // ������� ��� 0
//        if (que.empty())
//        {
//            cout << 0 << endl;
//        }
//        // �ƴҰ�� ���� �� ���, pop
//        else
//        {
//            cout << que.top() << endl;
//            que.pop();
//        }
//    }
//    // �Է� ���
//    else
//    {
//        que.push(num);
//    }
//}