//#include <iostream>
//using namespace std;
//
//int calc(int m, int n, int x, int y);
//int getGCD(int a, int b);
//int getLCM(int a, int b);
//
//int main()
//{
//    int testCount;
//    int m, n, x, y;
//    cin >> testCount;
//    for (int i = 0; i < testCount; i++) 
//    {
//        cin >> m >> n >> x >> y;
//
//        calc(m, n, x, y);
//    }
//}
//
//int calc(int m, int n, int x, int y)
//{
//    int limit = getLCM(m, n);
//
//    while (true)
//    {
//        //����⵵ ��� or x, y�� �����ϴ� �⵵ ã��
//        if (limit < x || (x - 1) % n + 1 == y)
//        {
//            break;
//        }
//        x += m; // M���� ���� �������� X
//    }
//    // ����ǳ����� ũ�� �Ұ���
//    if (limit < x)
//    {
//        return -1;
//    }
//    else
//    {
//        return x;
//    }
//}
//
//int getGCD(int a, int b) 
//{
//    if (b == 0) return a;
//
//    return getGCD(b, a % b);
//}
//
//int getLCM(int a, int b) {
//    return a * b / getGCD(a, b);
//}