//#include <iostream>
//using namespace std;
//class Cube
//{
//public:
//	char id;
//	char arr[3][3];
//};
//Cube cube[6];
//void setColor(char arr[][3], char color);
//void calc(char block, char direction);
//void init();
//int main()
//{
//	int t;
//	cin >> t;
//	int n;
//	while (t--)
//	{
//		cin >> n;
//		init();
//		string input;
//		for (int i = 0; i < n; i++)
//		{
//			cin >> input;
//			calc(input[0], input[1]);
//		}
//		for (int i = 0; i < 3; i++)
//		{
//			for (int j = 0; j < 3; j++)
//			{
//				cout << cube[0].arr[i][j];
//			}
//			cout << endl;
//		}
//	}
//	
//}
//
//void calc(char block, char direction)
//{
//	for (int c = 0; c < 6; c++)
//	{
//		if (cube[c].id == block)
//		{
//			if (direction == '+')
//			{
//				int temp[3][3];
//				// �ش� �� ����
//				for (int i = 0; i < 3; i++)
//				{
//					for (int j = 0; j < 3; j++)
//					{
//						if (i == 0)
//						{
//							temp[j][2] = cube[c].arr[i][j];
//						}
//						else if (i == 1)
//						{
//							temp[j][i] = cube[c].arr[i][j];
//						}
//						else
//						{
//							temp[j][0] = cube[c].arr[i][j];
//						}
//					}
//				}
//				for (int i = 0; i < 3; i++)
//				{
//					for (int j = 0; j < 3; j++)
//					{
//						cube[c].arr[i][j] = temp[i][j];
//					}
//				}
//				char temp1, temp2, temp3;
//				// ���� ����
//				// ���� �̸�
//				if (c == 1)
//				{
//					// 0 ��, 1 ��, 2 ��, 3 ��, 4 ��, 5 ��
//					temp1 = cube[0].arr[0][0];
//					temp2 = cube[0].arr[1][0];
//					temp3 = cube[0].arr[2][0];
//
//					cube[0].arr[0][0] = cube[4].arr[2][2];
//					cube[0].arr[1][0] = cube[4].arr[1][2];
//					cube[0].arr[2][0] = cube[4].arr[0][2];
//
//					cube[4].arr[2][2] = cube[5].arr[0][0];
//					cube[4].arr[1][2] = cube[5].arr[1][0];
//					cube[4].arr[0][2] = cube[5].arr[2][0];
//
//					cube[5].arr[0][0] = cube[3].arr[0][0];
//					cube[5].arr[1][0] = cube[3].arr[1][0];
//					cube[5].arr[2][0] = cube[3].arr[2][0];
//
//					cube[3].arr[0][0] = temp1;
//					cube[3].arr[1][0] = temp2;
//					cube[3].arr[2][0] = temp3;
//				}
//				// ������ ����
//				else if (c == 2)
//				{
//					// 0 ��, 1 ��, 2 ��, 3 ��, 4 ��, 5 ��
//					temp1 = cube[0].arr[0][2];
//					temp2 = cube[0].arr[1][2];
//					temp3 = cube[0].arr[2][2];
//
//					cube[0].arr[0][2] = cube[3].arr[0][2];
//					cube[0].arr[1][2] = cube[3].arr[1][2];
//					cube[0].arr[2][2] = cube[3].arr[2][2];
//
//					cube[3].arr[0][2] = cube[5].arr[0][2];
//					cube[3].arr[1][2] = cube[5].arr[1][2];
//					cube[3].arr[2][2] = cube[5].arr[2][2];
//
//					cube[5].arr[0][2] = cube[4].arr[2][0];
//					cube[5].arr[1][2] = cube[4].arr[1][0];
//					cube[5].arr[2][2] = cube[4].arr[0][0];
//
//					cube[4].arr[0][0] = temp3;
//					cube[4].arr[1][0] = temp2;
//					cube[4].arr[2][0] = temp1;
//				}
//				// �ո� ����
//				else if (c == 3)
//				{
//					// 0 ��, 1 ��, 2 ��, 3 ��, 4 ��, 5 ��
//					temp1 = cube[0].arr[2][0];
//					temp2 = cube[0].arr[2][1];
//					temp3 = cube[0].arr[2][2];
//
//					cube[0].arr[2][0] = cube[1].arr[2][2];
//					cube[0].arr[2][1] = cube[1].arr[1][2];
//					cube[0].arr[2][2] = cube[1].arr[0][2];
//
//					cube[1].arr[0][2] = cube[5].arr[0][0];
//					cube[1].arr[1][2] = cube[5].arr[0][1];
//					cube[1].arr[2][2] = cube[5].arr[0][2];
//
//					cube[5].arr[0][0] = cube[2].arr[2][0];
//					cube[5].arr[0][1] = cube[2].arr[1][0];
//					cube[5].arr[0][2] = cube[2].arr[0][0];
//
//					cube[2].arr[2][0] = temp3;
//					cube[2].arr[1][0] = temp2;
//					cube[2].arr[0][0] = temp1;
//				}
//				// �޸� ����
//				else if (c == 4)
//				{
//					// 0 ��, 1 ��, 2 ��, 3 ��, 4 ��, 5 ��
//					temp1 = cube[0].arr[0][0];
//					temp2 = cube[0].arr[0][1];
//					temp3 = cube[0].arr[0][2];
//
//					cube[0].arr[0][0] = cube[2].arr[0][2];
//					cube[0].arr[0][1] = cube[2].arr[1][2];
//					cube[0].arr[0][2] = cube[2].arr[2][2];
//
//					cube[2].arr[0][2] = cube[5].arr[2][2];
//					cube[2].arr[1][2] = cube[5].arr[2][1];
//					cube[2].arr[2][2] = cube[5].arr[2][0];
//
//					cube[5].arr[2][2] = cube[1].arr[2][0];
//					cube[5].arr[2][1] = cube[1].arr[1][0];
//					cube[5].arr[2][0] = cube[1].arr[0][0];
//
//					cube[1].arr[2][0] = temp1;
//					cube[1].arr[1][0] = temp2;
//					cube[1].arr[0][0] = temp3;
//				}
//				// �Ʒ� ����
//				else if (c == 5)
//				{
//					// 0 ��, 1 ��, 2 ��, 3 ��, 4 ��, 5 ��
//					temp1 = cube[1].arr[2][0];
//					temp2 = cube[1].arr[2][1];
//					temp3 = cube[1].arr[2][2];
//
//					cube[1].arr[2][0] = cube[4].arr[2][0];
//					cube[1].arr[2][1] = cube[4].arr[2][1];
//					cube[1].arr[2][2] = cube[4].arr[2][2];
//
//					cube[4].arr[2][0] = cube[2].arr[2][0];
//					cube[4].arr[2][1] = cube[2].arr[2][1];
//					cube[4].arr[2][2] = cube[2].arr[2][2];
//
//					cube[2].arr[2][0] = cube[3].arr[2][0];
//					cube[2].arr[2][1] = cube[3].arr[2][1];
//					cube[2].arr[2][2] = cube[3].arr[2][2];
//
//					cube[3].arr[2][0] = temp1;
//					cube[3].arr[2][1] = temp2;
//					cube[3].arr[2][2] = temp3;
//				}
//				// ���� ����
//				else if (c == 0)
//				{
//					// 0 ��, 1 ��, 2 ��, 3 ��, 4 ��, 5 ��
//					temp1 = cube[1].arr[0][0];
//					temp2 = cube[1].arr[0][1];
//					temp3 = cube[1].arr[0][2];
//
//					cube[1].arr[0][0] = cube[3].arr[0][0];
//					cube[1].arr[0][1] = cube[3].arr[0][1];
//					cube[1].arr[0][2] = cube[3].arr[0][2];
//
//					cube[3].arr[0][0] = cube[2].arr[0][0];
//					cube[3].arr[0][1] = cube[2].arr[0][1];
//					cube[3].arr[0][2] = cube[2].arr[0][2];
//
//					cube[2].arr[0][0] = cube[4].arr[0][0];
//					cube[2].arr[0][1] = cube[4].arr[0][1];
//					cube[2].arr[0][2] = cube[4].arr[0][2];
//
//					cube[4].arr[0][0] = temp1;
//					cube[4].arr[0][1] = temp2;
//					cube[4].arr[0][2] = temp3;
//				}
//
//
//			}
//			else
//			{
//				int temp[3][3];
//				// �ش� �� ����
//				for (int i = 0; i < 3; i++)
//				{
//					for (int j = 0; j < 3; j++)
//					{
//						if (j == 0)
//						{
//							temp[2][i] = cube[c].arr[i][j];
//						}
//						else if (j == 1)
//						{
//							temp[1][i] = cube[c].arr[i][j];
//						}
//						else
//						{
//							temp[0][i] = cube[c].arr[i][j];
//						}
//					}
//				}
//				for (int i = 0; i < 3; i++)
//				{
//					for (int j = 0; j < 3; j++)
//					{
//						cube[c].arr[i][j] = temp[i][j];
//					}
//				}
//				
//				char temp1, temp2, temp3;
//				// ���� ����
//				// ���� �̸�
//				if (c == 1)
//				{
//					// 0 ��, 1 ��, 2 ��, 3 ��, 4 ��, 5 ��
//					temp1 = cube[0].arr[0][0];
//					temp2 = cube[0].arr[1][0];
//					temp3 = cube[0].arr[2][0];
//
//					cube[0].arr[0][0] = cube[3].arr[0][0];
//					cube[0].arr[1][0] = cube[3].arr[1][0];
//					cube[0].arr[2][0] = cube[3].arr[2][0];
//
//					cube[3].arr[0][0] = cube[5].arr[0][0];
//					cube[3].arr[1][0] = cube[5].arr[1][0];
//					cube[3].arr[2][0] = cube[5].arr[2][0];
//
//					cube[5].arr[0][0] = cube[4].arr[2][2];
//					cube[5].arr[1][0] = cube[4].arr[1][2];
//					cube[5].arr[2][0] = cube[4].arr[0][2];
//
//					cube[4].arr[2][2] = temp1;
//					cube[4].arr[1][2] = temp2;
//					cube[4].arr[0][2] = temp3;
//				}
//				// ������ ����
//				else if (c == 2)
//				{
//					// 0 ��, 1 ��, 2 ��, 3 ��, 4 ��, 5 ��
//					temp1 = cube[0].arr[0][2];
//					temp2 = cube[0].arr[1][2];
//					temp3 = cube[0].arr[2][2];
//
//					cube[0].arr[0][2] = cube[4].arr[2][0];
//					cube[0].arr[1][2] = cube[4].arr[1][0];
//					cube[0].arr[2][2] = cube[4].arr[0][0];
//
//					cube[4].arr[2][0] = cube[5].arr[0][2];
//					cube[4].arr[1][0] = cube[5].arr[1][2];
//					cube[4].arr[0][0] = cube[5].arr[2][2];
//
//					cube[5].arr[0][2] = cube[3].arr[0][2];
//					cube[5].arr[1][2] = cube[3].arr[1][2];
//					cube[5].arr[2][2] = cube[3].arr[2][2];
//
//					cube[3].arr[0][2] = temp1;
//					cube[3].arr[1][2] = temp2;
//					cube[3].arr[2][2] = temp3;
//				}
//				// �ո� ����
//				else if (c == 3)
//				{
//					// 0 ��, 1 ��, 2 ��, 3 ��, 4 ��, 5 ��
//					temp1 = cube[0].arr[2][0];
//					temp2 = cube[0].arr[2][1];
//					temp3 = cube[0].arr[2][2];
//
//					cube[0].arr[2][0] = cube[2].arr[0][0];
//					cube[0].arr[2][1] = cube[2].arr[1][0];
//					cube[0].arr[2][2] = cube[2].arr[2][0];
//
//					cube[2].arr[0][0] = cube[5].arr[0][2];
//					cube[2].arr[1][0] = cube[5].arr[0][1];
//					cube[2].arr[2][0] = cube[5].arr[0][0];
//
//					cube[5].arr[0][2] = cube[1].arr[2][2];
//					cube[5].arr[0][1] = cube[1].arr[1][2];
//					cube[5].arr[0][0] = cube[1].arr[0][2];
//
//					cube[1].arr[2][2] = temp1;
//					cube[1].arr[1][2] = temp2;
//					cube[1].arr[0][2] = temp3;
//				}
//				// �޸� ����
//				else if (c == 4)
//				{
//					// 0 ��, 1 ��, 2 ��, 3 ��, 4 ��, 5 ��
//					temp1 = cube[0].arr[0][0];
//					temp2 = cube[0].arr[0][1];
//					temp3 = cube[0].arr[0][2];
//
//					cube[0].arr[0][0] = cube[1].arr[2][0];
//					cube[0].arr[0][1] = cube[1].arr[1][0];
//					cube[0].arr[0][2] = cube[1].arr[0][0];
//
//					cube[1].arr[2][0] = cube[5].arr[2][2];
//					cube[1].arr[1][0] = cube[5].arr[2][1];
//					cube[1].arr[0][0] = cube[5].arr[2][0];
//
//					cube[5].arr[2][2] = cube[2].arr[0][2];
//					cube[5].arr[2][1] = cube[2].arr[1][2];
//					cube[5].arr[2][0] = cube[2].arr[2][2];
//
//					cube[2].arr[0][2] = temp1;
//					cube[2].arr[1][2] = temp2;
//					cube[2].arr[2][2] = temp3;
//				}
//				// �Ʒ� ����
//				else if (c == 5)
//				{
//					// 0 ��, 1 ��, 2 ��, 3 ��, 4 ��, 5 ��
//					temp1 = cube[1].arr[2][0];
//					temp2 = cube[1].arr[2][1];
//					temp3 = cube[1].arr[2][2];
//
//					cube[1].arr[2][0] = cube[3].arr[2][0];
//					cube[1].arr[2][1] = cube[3].arr[2][1];
//					cube[1].arr[2][2] = cube[3].arr[2][2];
//
//					cube[3].arr[2][0] = cube[2].arr[2][0];
//					cube[3].arr[2][1] = cube[2].arr[2][1];
//					cube[3].arr[2][2] = cube[2].arr[2][2];
//
//					cube[2].arr[2][0] = cube[4].arr[2][0];
//					cube[2].arr[2][1] = cube[4].arr[2][1];
//					cube[2].arr[2][2] = cube[4].arr[2][2];
//
//					cube[4].arr[2][0] = temp1;
//					cube[4].arr[2][1] = temp2;
//					cube[4].arr[2][2] = temp3;
//				}
//				// ���� ����
//				else if (c == 0)
//				{
//					// 0 ��, 1 ��, 2 ��, 3 ��, 4 ��, 5 ��
//					temp1 = cube[1].arr[0][0];
//					temp2 = cube[1].arr[0][1];
//					temp3 = cube[1].arr[0][2];
//
//					cube[1].arr[0][0] = cube[4].arr[0][0];
//					cube[1].arr[0][1] = cube[4].arr[0][1];
//					cube[1].arr[0][2] = cube[4].arr[0][2];
//
//					cube[4].arr[0][0] = cube[2].arr[0][0];
//					cube[4].arr[0][1] = cube[2].arr[0][1];
//					cube[4].arr[0][2] = cube[2].arr[0][2];
//
//					cube[2].arr[0][0] = cube[3].arr[0][0];
//					cube[2].arr[0][1] = cube[3].arr[0][1];
//					cube[2].arr[0][2] = cube[3].arr[0][2];
//
//					cube[3].arr[0][0] = temp1;
//					cube[3].arr[0][1] = temp2;
//					cube[3].arr[0][2] = temp3;
//				}
//			}
//			break;
//		}
//		
//	}
//}
//
//void init()
//{
//	cube[0].id = 'U';
//	cube[1].id = 'L';
//	cube[2].id = 'R';
//	cube[3].id = 'F';
//	cube[4].id = 'B';
//	cube[5].id = 'D';
//
//	char color[6] = { 'w','g','b','r','o','y' };
//
//	for (int i = 0; i < 6; i++)
//	{
//		setColor(cube[i].arr, color[i]);
//	}
//}
//
//
//void setColor(char arr[][3], char color)
//{
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			arr[i][j] = color;
//		}
//	}
//}