//#include <iostream>
//using namespace std;
//const int MAX_SIZE = 40;
//void fibonacci(int num, int index, int& zeroCount, int& oneCount);
//int main()
//{
//    int numbers[MAX_SIZE];
//    int zeroCount[MAX_SIZE];
//    int oneCount[MAX_SIZE];
//    int n;
//
//    cin >> n;
//
//    // numbers �� �ޱ�
//    for (int i = 0; i < n; i++)
//    {
//        cin >> numbers[i];
//    }
//
//    // �� ī��Ʈ ����
//    for (int i = 0; i < n; i++)
//    {
//        fibonacci(numbers[i], i, zeroCount[i], oneCount[i]);
//    }
//
//    // ����� ī��Ʈ ���
//    for (int i = 0; i < n; i++)
//    {
//        cout << zeroCount[i] << " " << oneCount[i] << endl;
//    }
//
//}
//
//void fibonacci(int num, int index, int& zeroCount, int& oneCount)
//{
//    // 0 �̸� zeroCount ����
//    if (num == 0)
//    {
//        zeroCount++;
//    }
//    else if (num == 1)
//    {
//        oneCount++;
//    }
//    else
//    {
//        fibonacci(num - 1, index, zeroCount, oneCount);
//        fibonacci(num - 2, index, zeroCount, oneCount);
//    }
//}