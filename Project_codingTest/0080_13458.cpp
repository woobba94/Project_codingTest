//#include <iostream>
//using namespace std;
//
//long long calc(int* arr, int size);
//int mainMonitor;  // �Ѱ��� ���� ��
//int subMonitor;    // ���� ���� ��
//int main()
//{
//
//    int n; // (1 �� N �� 1,000,000)
//    cin >> n;
//
//    int* arr = new int[n];
//
//    for (int i = 0; i < n; i++)
//    {
//        cin >> arr[i]; // (1 �� Ai �� 1,000,000)
//    }
//
//    cin >> mainMonitor;
//    cin >> subMonitor;
//
//    cout << calc(arr, n) << endl;
//
//}
//
//long long calc(int* arr, int size)
//{
//    long long count = 0;
//
//    for (int i = 0; i < size; i++)
//    {
//        // �Ѱ������� ������ 1���ʿ�
//        arr[i] -= mainMonitor;
//        count++;
//
//        // ���� ������ �л� ������
//        if (0 < arr[i])
//        {
//
//            // �� �´� ���
//            if (arr[i] % subMonitor == 0)
//            {
//                // ���� �ο� / �������� ���� ��
//                count += (arr[i] / subMonitor);
//            }
//            else
//            {
//                // 1�� �� �߰�
//                count += (arr[i] / subMonitor) + 1;
//            }
//        }
//    }
//    return count;
//}