//#include<iostream> 
//
//using namespace std; 
//
//int main() 
//{
//	//����
//	int numerator = 0;
//	//�и�
//	int denominator = 0;
//
//	int input; 
//
//	int layer = 1; 
//	cin >> input;
//	// ã�� ��ȣ �Է� 
//
//	// �� ° �ٿ� �ִ��� �˻� 
//	while (layer < input)
//	{ 
//		input -= layer; // �ٸ�ŭ ���� (�� ������ ���� ����)
//		layer++;
//	} 
//	
//	// �ش� ���� ¦��
//	if (layer % 2 == 0)		
//	{ 
//		// �и� ���� ���� ���� 
//		for (int i = layer; 0 < i; i--)
//		{ 
//			denominator = i; 
//			numerator++; 
//			input--;
//			// ã���� ��
//			if (input == 0) break;
//		} 
//	} 
//	else // Ȧ���ϋ� 
//	{ 
//		// �и� ���� ���ڰ��� 
//		for (int i = layer; 0 < i; i--)
//		{ 
//			numerator = i; 
//			denominator++; 
//			input--;
//			if (input == 0) break;
//		} 
//	} 
//	cout << numerator << "/" << denominator;
//}
//
