//#include <iostream>
//using namespace std;
//
//int k;
//int c;
//int numbers[14];
//int madeNum[7]; // ��������
//void DFS(int node, int depth);
//
//int main()
//{
//
//    while (true)
//    {
//        cin >> k;
//
//        if (k == 0) break;
//
//        for (int i = 1; i <= k; i++)
//        {
//            cin >> numbers[i];
//        }
//
//        // ù��° ��� 1, ���� 1���� ����
//        DFS(1, 1);
//
//
//        cout << endl;
//    }
//}
//
//// ���̿켱Ž��
//void DFS(int node, int depth)
//{
//    if (depth == 7) // ������ Ž���ϸ� ���� ���� ���
//    {
//        for (int i = 1; i <= 6; i++)
//        {
//            cout << madeNum[i] << " ";
//        }
//        cout << endl;
//        return;
//    }
//
//    // �ܰ� ���� -> node++, ����++
//    for (int i = node; i <= k; i++) // ��� ��带 �ϳ��� ������ DFS
//    {
//        // ���� ���� ����
//        madeNum[depth] = numbers[i];
//        DFS(i + 1, depth + 1);
//    }
//
//}