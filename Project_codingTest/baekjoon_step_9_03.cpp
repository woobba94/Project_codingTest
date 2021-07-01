//#include <iostream>
//#include <string>
//#include <stack>
//
//using namespace std;
//
//int main() 
//{
// 	ios::sync_with_stdio(false);
//	cin.tie(0);
//	int n;
//	cin >> n;
//
//	while (n > 0) 
//	{
//		n--;
//		string input;
//		cin >> input;
//
//		stack<char> st;
//		string result = "YES";
//		for (int i = 0; i < input.length(); i++) 
//		{
//			//  ( ���� -> Ǫ��
//			if (input[i] == '(')
//			{
//				st.push(input[i]);
//			}
//			//  ) ���� -> ( �� ¦�� �´��� Ȯ���ϰ� ��
//			//  ������ ��������ʰ� && ���� ���� ) �̰� && ���� �����ִ°��� ( �϶� => pop
//			else if (st.empty() == false && input[i] == ')' && st.top() == '(')
//			{
//				st.pop();
//			}
//			else 
//			{
//				result = "NO";
//				break;
//			}
//		}
//		// ¦ �´°� �� ���������� ���°� �������.
//		// -> st.empty() == true �̸� ¦�� ������.
//		if (st.empty() == false) result = "NO";
//
//		cout << result << endl;
//	}
//	return 0;
//}