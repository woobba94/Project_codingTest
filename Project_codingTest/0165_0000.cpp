#include <iostream>
#include <algorithm>

using namespace std;

long long x, y, w, s; //w = ����, s = �밢��

int main() {
    cin >> x >> y >> w >> s;
    long long mod = (x + y) % 2;
    if (x < y) swap(x, y); //x�� ū �� 
    cout << min((x + y) * w, min((x - mod) * s + mod * w, y * s + (x - y) * w)) << endl;

    return 0;
}


//getMin(((x - mod) * s) + w * mod, y * s + (x - y) * w);