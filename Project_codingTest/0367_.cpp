//#include <iostream>
//#include <string>
//#include <cstdlib>//abs
//#include <algorithm>//min
//using namespace std;
//
//int INF = 1000001;
//int noButton[10];//1�̸� ���峭 ��ư
//
////���� �� �ִ� ��ȣ����
//bool Possible(int num) {
//	//�������� ��ȣ�� 0�� ��� ����
//	if (num == 0) {
//		//��ư 0�� ���峭 ���
//		if (noButton[0] == 1)
//			return false;
//		else
//			return true;
//	}
//	while (num) {
//		//���峭 ��ư�� ��ȣ�� ���ԵǾ� ������ false��ȯ
//		if (noButton[num % 10] == 1) {
//			return false;
//		}
//		num /= 10;
//	}
//	return true;
//}
//
//int getMinimum(int num) {
//	//���� ä���� 100���� + �Ǵ� -��ư���� ������ ä�η� ���� ���
//	int From100 = abs(num - 100);
//	int Min = INF;
//	int tmp;
//	for (int i = 0; i <= INF; i++) {
//		//���� �� �ִ� ��ȣ��
//		if (Possible(i)) {
//			//��ȣ ����
//			tmp = to_string(i).length();
//			//+-������ Ƚ��
//			tmp += abs(i - num);
//			//�ּڰ� ����
//			Min = min(Min, tmp);
//		}
//	}
//	//100���� +,-�� �����ϴ� �Ͱ� ��
//	return min(From100, Min);
//}
//
//int main() {
//	int N, M;
//	cin >> N >> M;
//	for (int i = 0; i < M; i++) {
//		int n;
//		cin >> n;
//		noButton[n] = 1;
//	}
//	cout << getMinimum(N) << endl;
//	return 0;
//}