//#include <iostream>
//#include <vector>
//#include <stack>
//
//using namespace std;
//int main() 
//{
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//    int count = 0;
//    int n = 0, x, max = 0;
//    cin >> n;
//    // + �� - �� ������ ����
//    vector <char> vec(n * 2);
//
//    stack <int> num;
//    while (n--) 
//    {
//        cin >> x;
//        // ���� ���� max���� ũ�ٸ�
//        if (x > max) 
//        {
//            // max �������� x ���� push
//            for (int i = max + 1; i <= x; i++) 
//            {
//                max = x; // max �� ����
//                num.push(i);
//                // push ������ + ����
//                vec[count] = '+';
//                count++;
//            }
//        }
//        else
//        {
//            // ���� ���� max���� ������ top�� �ٸ��ٸ� �Ұ���
//            if (num.top() != x)
//            {
//                cout << "NO";
//                return 0;
//            }
//        }
//        // pop ������ - ����
//        num.pop();
//        vec[count] = '-';
//        count++;
//    }
//    for (int i = 0; i < count; i++)
//    {
//        cout << vec[i] << "\n";
//    }
//    return 0;
//}