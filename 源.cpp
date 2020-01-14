#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int F(string s)
{
	int n=0;
	for (int i = s.size()-1; i >=0; i--)
	{
		if (s[i] > 47 && s[i] < 58)
		{
			for (int j = 48; j < 58; j++)
			{
				if (s[i] == j)
					n += (j - 48) *(int) pow(16, i );
			}
		}
		else
		{
			for (int j = 65; j < 70; j++)
			{
				if (s[i] == j)
					n += (j - 55) *(int) pow(16, i );
			}
		}
	}
	return n;
}
int main()
{
	int n;
	cin >> n;
	string* str = new string[n];
	for (int i = 0; i < n; i++)
		cin >> str[i];
	cout << F(str[0]) << endl;
	return 0;
}
