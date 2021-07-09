//#include <iostream>
//#include <cstring>
//#include <queue>
//#include <string>
//
//
//using namespace std;
//
//void setEratos(bool primeArr[]);
//int charToInt(string num);
//void bfs(int start);
//
//#define max_int 10001
//
//int n, start_node, end_node;
//bool primeArr[max_int] = {true, };
//int check[max_int] = {-1, };
//
//
//int main() 
//{
//    // dp �迭 ä��� (2~10000 ���� �Ҽ��Ǻ�)
//    setEratos(primeArr);
//
//    cin >> n;
//
//    while (n--) 
//    {
//        cin >> start_node >> end_node;
//
//        // 3. BFS ����
//        bfs(start_node);
//
//        // 4. ���
//        // 1) ���� ��ǥ ���ڷ� ���� �ߴٸ� �Ÿ� ���
//        if (check[end_node] != -1) 
//        {
//            cout << check[end_node];
//        }
//        // ���� �� ���� ���ڶ��
//        else 
//        {
//            cout << "Impossible" << endl;
//        }
//    }
//}
//
//
//// �����佺�׳׽��� ü
//void setEratos(bool primeArr[])
//{
//    for (int i = 2; i * i < max_int; i++) 
//    {
//        for (int j = i * i; j < max_int; j += i) 
//        {
//            // i�� ��� -> false
//            primeArr[j] = false;
//        }
//    }
//}
//
//// 4�ڸ� ���� -> int ��ȯ
//int charToInt(string num) 
//{
//    int result = 0;
//
//    for (int i = 0; i < 4; i++) 
//    {
//        result = result * 10 + (num[i] - '0');
//    }
//
//    return result;
//}
//
//// BFS ����
//void bfs(int start) 
//{
//    int* que = new int[100];
//    int pointer = 0;
//    que[pointer] = start;
//
//    check[start] = 0;
//
//    while (!(que[0] == -1))
//    {
//        int node = que[pointer];
//        que[pointer] = -1;
//
//        // �� ���ڸ� ���� 4�ڸ� �˻�
//        for (int i = 0; i < 4; i++) 
//        {
//            char node_s[4];
//            for (int k = 0; k < 4; k++)
//            {
//                node_s[i] = to_string(node);
//            }
//                
//            // ��� �ڸ��� 0~9�� ��ȯ�غ��ϴ�.
//            for (int j = 0; j < 10; j++) 
//            {
//                node_s[i] = j + '0';
//                int next = charToInt(node_s);
//                // ���� �̵��Ϸ��� ���ڰ� 4�ڸ� ���̰�, �Ҽ��̸�, �湮���� �ʾҴٸ� ť�� �־��ݴϴ�.
//                if (next >= 1000 && primeArr[next] == true && check[next] == -1) 
//                {
//                    check[next] = check[node] + 1;
//                    q.push(next);
//                }
//            }
//        }
//    }
//}