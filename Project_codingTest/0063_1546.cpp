//#include <iostream>
//using namespace std;
//
//double getAvr(double* score, int size);
//
//int main()
//{
//	int n;
//	cin >> n;
//	double* score = new double[n];
//	int max = 0;
//	
//	for (int i = 0; i < n; i++)
//	{
//		cin >> score[i];
//		// �ִ� �ٷ� ����
//		if (max < score[i])
//		{
//			max = score[i];
//		}
//	}
//
//	// ���� ����
//	for (int i = 0; i < n; i++)
//	{
//		score[i] = score[i] / max * 100;
//	}
//
//	cout << getAvr(score, n);
//}
//
//double getAvr(double* score, int size)
//{
//	double sum = 0;
//	double result = 0.f;
//
//	for (int i = 0; i < size; i++)
//	{
//		sum += score[i];
//	}
//	result = sum / size;
//	return result;
//}