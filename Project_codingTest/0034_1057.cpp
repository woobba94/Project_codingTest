//#include <iostream>
//using namespace std;
//
//int getRoundCount(int playerCount, int p1, int p2);
//int main()
//{
//    int n;
//    int player1, player2;
//    cin >> n >> player1 >> player2;
//
//    cout << getRoundCount(n, player1, player2) << endl;
//}
//
//int getRoundCount(int playerCount, int p1, int p2)
//{
//    int roundCount = 1;
//    while (playerCount != 0)
//    {
//        // p1 p2 ������
//        if ((p1 + 1) / 2 == (p2 + 1) / 2)
//        {
//            break;
//        }
//
//        // ���� ���� 
//        p1 = (p1 + 1) / 2;
//        p2 = (p2 + 1) / 2;
//        roundCount += 1;
//        playerCount /= 2;
//    }
//    // ������ �ȸ�����
//    if (playerCount == 0)
//    {
//        return -1;
//    }
//    return roundCount;
//}
