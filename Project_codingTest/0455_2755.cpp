//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	float sum = 0;
//	int levelSum = 0;
//	
//	for (int i = 0; i < n; i++)
//	{
//		float score = 0.0;
//		string temp;
//		int level;
//		string grade;
//
//		cin >> temp >> level >> grade;
//
//		levelSum += level;
//
//		if (grade[0] == 'A')
//		{
//			score = 4.0;
//		}
//		else if (grade[0] == 'B')
//		{
//			score = 3.0;
//		}
//		else if (grade[0] == 'C')
//		{
//			score = 2.0;
//		}
//		else if (grade[0] == 'D')
//		{
//			score = 1.0;
//		}
//		else
//		{
//			continue;
//		}
//
//		if (grade[1] == '+') score += 0.3;
//		else if (grade[1] == '-') score -= 0.3;
//
//		sum += level * score;
//	}
//
//	cout << fixed;
//	cout.precision(2);
//
//	cout << sum / levelSum + 0.0001;
//}