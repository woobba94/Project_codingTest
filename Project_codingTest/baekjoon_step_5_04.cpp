//#include <iostream>
//using namespace std;
//
//
//int getAverage(int* (&arr), int size);
//int getMedian(int* (&arr), int size);
//int getMaxFrequency(int* (&arr), int size, int count[], int maxVal);
//int getRange(int* (&arr), int size);
//void quickSort(int* (&arr), int start, int end);
//
//int main()
//{
//	int count[8001] = { 0, };
//	int maxVal = 0;
//	int n = 0;
//	cin >> n;
//
//	int* arr = new int[n];
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//		count[arr[i] + 4000]++;
//		if (maxVal < count[arr[i] + 4000]) maxVal = count[arr[i] + 4000];
//	}
//
//	quickSort(arr, 0, n - 1);
//
//	cout << "������ : " << getAverage(arr, n) << endl;
//	cout << "�߾Ӱ� : " << getMedian(arr, n) << endl;
//	cout << "�ֺ� : " << getMaxFrequency(arr, n, count, maxVal) << endl;
//	cout << "���� : " << getRange(arr, n) << endl;
//}
//
//// ������
//int getAverage(int* (&arr), int size)
//{
//	double result = 0;
//	for (int i = 0; i < size; i++)
//	{
//		result += arr[i];
//		//cout << "arr[" << i << "] = " << arr[i] << endl;
//	}
//	//cout << "�������� result ���� = " << result << endl;
//	result = round(result / (double)size); // �ݿø� round()
//	//cout << size <<"�� ���� �� result ���  = " << result << endl;
//
//	return result;
//}
//
//// �߾Ӱ�
//int getMedian(int* (&arr), int size)
//{
//	int result = 0;
//	result = arr[size / 2];
//
//	return result;
//}
//
//// �ֺ�
//int getMaxFrequency(int* (&arr), int size, int count[], int maxVal)
//{
//	int isSecond = false;
//	int result = 0;
//	for (int i = 0; i < 8001; i++)
//	{
//		if (maxVal == count[i])
//		{
//			result = i - 4000;
//			/*cout << "��� ����:" << endl;
//			cout << result << endl;
//			cout << "��---" << endl;*/
//			if (isSecond) break;
//			isSecond = true;
//		}
//	}
//	return result;
//}
//
//// ����
//int getRange(int* (&arr), int size)
//{
//	int result = 0;
//	result = abs(arr[size - 1] - arr[0]);
//
//	return result;
//}
//
//// �� ����(��������)
//void quickSort(int* (&arr), int start, int end)
//{
//	if (start >= end)
//	{
//		return;
//	}
//	int temp;
//	int pivot = arr[(start+end)/2]; // ������(�߰�)
//	int left = start; // ���� �������
//	int right = end; // ������ �������
//
//	while (left <= right)
//	{
//		while (arr[left] < pivot) left++; // ���ʿ� ������ ���� ū���� ������ ��� ++
//		while (arr[right] > pivot) right--;
//
//		// left�� ���ʿ��� ���������� ū ���� ã��.
//		// right�� �����ʿ��� ���������� ���� ���� ã��.
//
//		if (left <= right) // �������϶�
//		{
//			// ������ ū���� �������� �������� ��ȯ
//			temp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = temp;
//			left++;
//			right--;
//		}
//	}
//	quickSort(arr, start, right); // ���� �κ� �ٽ� ������
//	quickSort(arr, left, end); // ������ �κ� �ٽ� ������
//}