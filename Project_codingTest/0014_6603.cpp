//#include <iostream>
//
//using namespace std;
//void lottoCalc(int* arr, int selected[], int index, int depth, int size);
//int main()
//{
//	int k = 0;
//	int* arr;
//	int selected[6] = { 0, };
//
//	while (1)
//	{
//		cin >> k;
//		if (k == 0) break;
//		arr = new int[k];
//
//		for (int i = 0; i < k; i++)
//		{
//			cin >> arr[i];
//		}
//		lottoCalc(arr, selected, 0, 0, k);
//		cout << endl;
//	}
//}
//
//void lottoCalc(int* arr, int selected[], int index, int selectedCount, int size)
//{
//	// 6�ڸ��� �ϼ��Ǹ� ��� 
//	if (selectedCount == 6)
//	{ 
//		for (int i = 0; i < 6; ++i) 
//		{ 
//			cout << selected[i] << ' ';
//		} 
//		cout << endl; 
//		return; 
//	} 
//	// 6�ڸ��� �ϼ��Ǳ� ���� index�� ������ �Ѿ���� ��� 
//	else if (index == size)
//	{ 
//		return; 
//	} 
//	selected[selectedCount] = arr[index];
//
//	// arr[index]�� �����ϴ� ��� 
//	lottoCalc(arr, selected, index + 1, selectedCount + 1, size);
//
//	// arr[index]�� �������� �ʴ� ��� 
//	lottoCalc(arr, selected, index + 1, selectedCount, size);
//}