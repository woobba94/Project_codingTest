//#include <iostream>
//#include <stack>
//
//using namespace std;
//
//void func(stack <int> st, int input, int n);
//
//int main()
//{
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    int n;
//    cin >> n;
//
//    stack<int> st; // ������ stack ����. 
//    int input = 0;
//
//    func(st, input, n);
//}
//
//void func(stack <int> st, int input, int n)
//{
//    for (int i = 0; i < n; i++)
//    {
//        cin >> input;
//        // 0 �Է� -> ��
//        if (input == 0)
//        {
//            if (st.empty() == false) //���� �� �ִ� ���� ������ ����
//            {
//                st.pop();
//            }
//            else cout << "���� �� �ִ� ���� ����. \n";
//            
//        }
//        // 0 �̿��� �� 
//        else
//        {
//            st.push(input);
//        }
//    }
//    int count = st.size();
//    int result = 0;
//    for (int i = 0; i < count; i++)
//    {
//        result += st.top();
//        st.pop();
//    }
//
//    cout << result;
//}