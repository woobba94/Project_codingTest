//#include <iostream>
//#include <queue>
//#include <vector>
//
//using namespace std;
//
//void func(vector <int> vec, priority_queue <int> queA, priority_queue <int> queB);
//
//int main(void)
//{
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    vector <int> vec;
//    // �߰��� ���ϱ����� �켱����ť �ΰ� ����
//    priority_queue <int> queA, queB;
//    int n;
//    cin >> n;
//    for (int i = 0; i < n; i++)
//    {
//        int temp;
//        cin >> temp;
//        vec.push_back(temp);
//    }
//
//    func(vec, queA, queB);
//
//}
//
//void func(vector <int> vec, priority_queue <int> queA, priority_queue <int> queB)
//{
//    int valA = 0, valB = 0;
//    for (int i = 0; i < vec.size(); i++)
//    {
//        if (queA.size() > queB.size()) queB.push(-vec[i]);
//        else queA.push(vec[i]);
//
//        // �� ť�� ������� ������
//        if (queA.empty() == false && queB.empty() == false)
//        {
//            // �ִ��� ž�� -�ּڰ�ž���� ũ��
//            if (queA.top() > -queB.top())
//            {
//                // �� val ����
//                valA = queA.top();
//                valB = -queB.top();
//
//                queA.pop();
//                queB.pop();
//
//                queA.push(valB);
//                queB.push(-valA);
//            }
//        }
//        cout << queA.top() << endl;
//    }
//}