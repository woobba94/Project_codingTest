//#include <iostream>
//using namespace std;
//
//int getGDC(int a, int b);
//int main() 
//{
//    int numeratorA, denominatorA;
//    int numeratorB, denominatorB;//�Է�
//
//    int numerator, denominator;//���
//
//    cin >> numeratorA >> denominatorA;
//    cin >> numeratorB >> denominatorB;
//
//    // ���� = �밢�� ���� ��
//    numerator = numeratorA * denominatorB + numeratorB * denominatorA;
//    // �и� = �� �и� ��
//    denominator = denominatorA * denominatorB;
//
//    // ���м� -> ��� �ʿ� -> gdc ��� 
//    int gdc = getGDC(numerator, denominator);
//    numerator /= gdc;
//    denominator /= gdc;
//
//    cout << numerator << ' ' << denominator << endl;
//
//}
//
//int getGDC(int a, int b)
//{
//    if (b == 0) 
//        return a;
//    return getGDC(b, a % b);
//}