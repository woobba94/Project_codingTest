//#include <iostream>
//#include <stack>
//#include <string>
//
//using namespace std;
//
//void func(stack <int> st, string str, int n);
//int main()
//{
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//
//    int n;
//    cin >> n;
//
//    stack<int> st; // ������ stack ����. 
//    string str;
//
//    func(st, str, n);
//}
//
//void func(stack <int> st, string str, int n)
//{
//    for (int i = 0; i < n; i++) 
//    {
//        cin >> str;
//        //push ��ɾ� �϶�. 
//        if (str == "push") 
//        { 
//            int num;
//            cin >> num;
//            st.push(num);
//        }
//        //pop ��ɾ� �϶�. 
//        else if (str == "pop") 
//        {    
//            if (!st.empty()) 
//            {
//                cout << st.top() << endl;
//                st.pop();
//            }
//            else 
//            {
//                cout << "-1" << endl;
//            }
//        }
//        //size ��ɾ� �϶�
//        else if (str == "size") 
//        {       
//            cout << st.size() << endl;
//        }
//        //empty ��ɾ� �϶�. 
//        else if (str == "empty") 
//        {    
//            if (st.empty()) 
//            {
//                cout << "1" << endl;
//            }
//            else 
//            {
//                cout << "0" << endl;
//            }
//        }
//        //top ��ɾ� �϶�. 
//        else if (str == "top") 
//        {        
//            if (!st.empty()) 
//            {
//                cout << st.top() << endl;
//            }
//            else 
//            {
//                cout << "-1" << endl;
//            }
//        }
//    }
//}