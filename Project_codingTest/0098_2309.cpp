//#include <iostream>
//using namespace std;
//
//const int SIZE = 9;
//void sort(int arr[]);
//
//int main()
//{
//    int arr[SIZE] = {};
//	int sum = 0;
//
//	// ���� ��� Ű�� ����
//	for (int i = 0; i < SIZE; i++)
//	{
//		cin >> arr[i];
//		sum += arr[i];
//	}
//
//    for (int i = 0; i < SIZE; i++)
//    {
//        for (int j = i + 1; j < SIZE; j++)
//        {
//            // �߸� �� �θ� i, j ã��
//            if (sum - (arr[i] + arr[j]) == 100)
//            {
//                arr[i] = 0;
//                arr[j] = 0;
//
//                sort(arr);
//
//                // 0 ���� ���ŵ� 2�� ���� ���
//                for (int i = 2; i < SIZE; i++)
//                {
//                    cout << arr[i] << endl;
//                }
//                return 0;
//            }
//        }
//    }
//}
//
//// ��������
//void sort(int arr[])
//{
//    for (int i = 0; i < SIZE; i++)
//    {
//        for (int j = 0; j < SIZE - 1; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                int temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//    }
//}