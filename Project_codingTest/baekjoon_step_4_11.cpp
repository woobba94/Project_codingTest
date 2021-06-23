#include <iostream>
using namespace std;

bool isPrime(int num);
void findPartition(int num);
int main()
{
	int T;
	int arr[100];
	
	cout << "���̽� ���� : ";
	cin >> T;

	cout << "2���� ū ¦�� �Է� : " << endl;

	for (int i = 0; i < T; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < T; i++)
	{
		findPartition(arr[i]);
	}
}

bool isPrime(int num) // �Ҽ� �Ǻ�
{
	if (num == 1) return false;

	for (int i = 2; i <= sqrt(num); i++)
	{
		if (num % i == 0) return false;
	}
	return true;
}

void findPartition(int num) // ��Ƽ�� ���&���
{
	int result[3] = {0,};//i��, j��, ���̰� ����

	for (int i = 1; i < num; i++)
	{
		for (int j = num - 1; j > 0; j--)
		{
			if (isPrime(i) == true && isPrime(j) == true)
			{
				if (i + j == num) {
					if (result[0] == 0) //ù ����
					{
						result[0] = i;
						result[1] = j;
						result[2] = abs(i - j);
					}
					else if (result[2] > abs(i - j))
					{
						result[0] = i;
						result[1] = j;
						result[2] = abs(i - j);
					}
					else continue;
				}
			}
		}
	}
	cout << result[0] << " " << result[1] << endl;
}
