//#include <iostream>
//using namespace std;
//
//int upDP[1001] = {};
//int downDP[1001] = {};
//
//int getMax(int a, int b);
//int main()
//{
//	int n;
//	cin >> n;
//	int* arr = new int[n + 1];
//
//	for (int i = 1; i < n + 1; i++)
//	{
//		cin >> arr[i];
//	}
//
//    // dp �ּҰ� 1(�ּ� 1���̹Ƿ�)
//    // 
//    // ���Ҽ��� ũ��
//    for (int i = n; i > 0; i--)
//    {
//        downDP[i] = 1;
//        for (int j = n; j >= i; j--)
//        {
//            if (arr[i] > arr[j] && downDP[j] + 1 > downDP[i])
//            {
//                downDP[i] = downDP[j] + 1;
//            }
//        }
//    }
//
//    // �������� ũ��
//    for (int i = 1; i < n + 1; i++)
//    {
//        upDP[i] = 1;
//        // i���� ���������� �˻�
//        for (int j = 1; j <= i; j++)
//        {
//            if (arr[j] < arr[i] && upDP[i] < upDP[j] + 1)
//            {
//                upDP[i] = upDP[j] + 1;
//            }
//        }
//    }
//
//    int max = 0;
//    for (int i = 0; i < n + 1; i++)
//    {
//        max = getMax(max, upDP[i] + downDP[i] - 1);
//    }
//    cout << max;
//}
//
//int getMax(int a, int b)
//{
//    if (a < b)
//        return b;
//    return a;
//}