//#include <iostream>
//using namespace std;
//
//// ���� �ؼ�:
//// �� �� A(x1, y1), B(x2, y2) �� �־����� 
//// ��C�� ���� A-C �Ÿ��� r1, B-C �Ÿ��� r2�϶�,
//// �� C�� ������ ��ǥ ���� ���Ͽ���
//
//int check(int arr1[], int arr2[]);
//double getDistance(int arr1[], int arr2[]);
//int main()
//{
//	int A[3], B[3];
//	int T;
//	cin >> T;
//	while (T != 0)
//	{
//		cin >> A[0] >> A[1] >> A[2] >> B[0] >> B[1] >> B[2];
//		cout << check(A, B) << endl;
//		T--;
//	}
//}
//// �� ���� ��������� �˻��ϴ� �Լ�
//int check(int arr1[], int arr2[])
//{
//	// �� ���� ��ġ�� ��� -> ���Ѵ�
//	if (arr1[2] == arr2[2] && getDistance(arr1, arr2) == 0)	return -1;
//	// �� ���� �Ϻ� ��ħ -> 2��
//	else if ((double)arr1[2] + arr2[2] > getDistance(arr1, arr2) && getDistance(arr1, arr2) != 0) return 2;
//	// �� ���� ���� -> 1��
//	else if ((double)arr1[2] + arr2[2] == getDistance(arr1, arr2)) return 1;
//	// ������ -> 0��
//	else return 0;
//}
//// �� �� ���� �Ÿ� ���ϴ��Լ�
//double getDistance(int arr1[], int arr2[])
//{
//	double result; // �� �� ���� �Ÿ�
//	result = sqrt(abs(arr1[0] - arr2[0]) * abs(arr1[0] - arr2[0]) +
//		abs(arr1[1] - arr2[1]) * abs(arr1[1] - arr2[1]));
//
//	return result;
//}