//#include <iostream>
//using namespace std;
//int k;
//void calc(int depth);
//void printDep(int depth);
//int main()
//{
//	cin >> k;
//
//	cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������." << endl;
//	calc(0);
//	cout << "��� �亯�Ͽ���." << endl;
//}
//
//void calc(int depth)
//{
//	printDep(depth);
//	cout << "\"����Լ��� ������?\"" << endl;
//	
//	if (depth == k)
//	{
//		printDep(depth);
//		cout << "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"" << endl;
//		return;
//	}
//	else
//	{
//		printDep(depth);
//		cout << "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���." << endl;
//		printDep(depth);
//		cout << "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���." << endl;
//		printDep(depth);
//		cout << "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"" << endl;
//	}
//
//	calc(depth + 1);
//	printDep(depth + 1);
//	cout << "��� �亯�Ͽ���." << endl;
//}
//
//void printDep(int depth)
//{
//	for (int i = 0; i < depth; i++)
//	{
//		cout << "____";
//	}
//}