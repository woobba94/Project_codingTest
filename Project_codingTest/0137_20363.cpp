#include <iostream>
using namespace std;

int main()
{
	int result = 0;

	int needWarm, needMoisture;
	cin >> needWarm >> needMoisture;
	
	// ���� �±�� ����
	int nowWarm = 0;
	int nowMoisture = 0;

	int flag = false;
	while (1)
	{
		if (needWarm == 0 && needMoisture == 0) break;

		// �±� �� ä��
		result += needWarm;
		nowWarm += needWarm;

		// ó���̸�
		if (flag == false)
		{
			flag = true;
		}
		else
		{
			nowMoisture -= needWarm / 10;
			needMoisture += needWarm / 10;
		}
		needWarm = 0;
		
		// ���� �� ä��
		result += needMoisture;
		nowMoisture += needMoisture;

		nowWarm -= needMoisture / 10;
		needWarm += needMoisture / 10;

		needMoisture = 0;

	}

	cout << result;

}
