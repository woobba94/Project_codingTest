//#include <iostream>
//#include <deque>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//void func(deque <int> que, int n, int k);
//int main()
//{
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//
//    int n, k;
//    cin >> n >> k;
//
//    deque<int> que; // ������ ť ����. 
//
//    for (int i = 1; i <= n; i++)
//    {
//        que.push_back(i);
//    }
//    cout << "<";
//    func(que, n, k);
//    cout << ">";
//    
//}
//
//void func(deque <int> que, int n, int k)
//{
//    while (true)
//    {
//        // ť�� ��������� ����
//        if (que.empty() == true) return;
//
//        for (int i = 0; i < k - 1; i++) 
//        {
//            que.push_back(que.front()); // �� �տ��� �ǵڷ� Ǫ��
//            que.pop_front(); // �� �տ��� ��
//        }
//
//        cout << que.front();
//        que.pop_front();
//
//        // ������ ���Ұ� �ƴϸ�
//        if (que.empty() == false)
//        {
//            cout << ", ";
//        }
//
//    }
//}