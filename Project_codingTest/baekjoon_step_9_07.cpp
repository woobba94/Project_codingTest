//#include <iostream>
//#include <deque>
//#include <string>
//
//using namespace std;
//
//void func(deque <int> que, string str, int n);
//int main()
//{
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//
//    int n;
//    cin >> n;
//
//    deque<int> que; // ������ ť ����. 
//    string str;
//
//    func(que, str, n);
//}
//
//void func(deque <int> que, string str, int n)
//{
//    for (int i = 0; i < n; i++) 
//    {
//        cin >> str;
//        // empty ��ɾ��϶� 
//        if (str == "empty")
//        {
//            // ť�� ���������
//            if (que.empty())
//            {
//                cout << 1 << endl;
//            }
//            else
//            {
//                cout << 0 << endl;
//            }
//        }
//        // push ��ɾ� �϶�. 
//        else if (str == "push") 
//        { 
//            int num;
//            cin >> num;
//            que.push_back(num);
//        }
//        // pop ��ɾ� �϶�. 
//        else if (str == "pop") 
//        {    
//            // ť�� �Ⱥ��������
//            if (que.empty() == false)
//            {
//                cout << que.front() << endl;
//                que.pop_front();
//            }
//            else 
//            {
//                cout << "-1" << endl;
//            }
//        }
//        // size ��ɾ� �϶�
//        else if (str == "size") 
//        {       
//            cout << que.size() << endl;
//        }
//        // front ��ɾ� �϶�. 
//        else if (str == "front") 
//        {        
//            // ť�� �Ⱥ��������
//            if (que.empty() == false)
//            {
//                cout << que.front() << endl;
//            }
//            else 
//            {
//                cout << "-1" << endl;
//            }
//        }
//        // back ��ɾ� �϶�. 
//        else if (str == "back") {
//            // ť�� �Ⱥ��������
//            if (que.empty() == false)
//            {
//                cout << que.back() << endl;
//            }
//            else cout << -1 << endl;
//                
//        }
//    }
//}