//#include <iostream>
//#include <string>
//#include <stack>
//
//using namespace std;
//
//int main() 
//{
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	while (1) 
//	{
//		string input;
//		getline(cin, input);
//		// ���ϳ��� �̷���� ���ڿ��̸�
//		if (input.size() == 1 && input[0] == '.') break;
//
//		stack<char> st;
//		string result = "YES";
//		//  ���ڿ����� ()[]. �� ã��
//		for (int i = 0; i < input.length(); i++)
//		{
//			//  ( �Ǵ� [ ���� -> Ǫ��
//			if (input[i] == '(' || input[i] == '[')
//			{
//				st.push(input[i]);
//			}
//			//  ) ���� -> ( �� ¦�� �´��� Ȯ���ϰ� ��
//			//  ������ ��������ʰ� && ���� ���� ) �̰� && ���� �����ִ°��� ( �϶� => pop
//			else if (st.empty() == false && input[i] == ')' && st.top() == '(')
//			{
//				st.pop();
//			}
//			else if (st.empty() == false && input[i] == ']' && st.top() == '[')
//			{
//				st.pop();
//			}
//		}
//		// ¦ �´°� �� ���������� ���°� �������.
//		// -> st.empty() == true �̸� ¦�� ������.
//		if (st.empty() == false) result = "NO";
//
//		cout << result << endl;
//		
//	}
//	return 0;
//}