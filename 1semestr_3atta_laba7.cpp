#include <iostream>

using namespace std;

bool CheckMethod(string s)
{
	int countOpen = 0; // ���������� �������� ������
	int countClose = 0;// ���������� �������� ������
	int count = 0;// ���������� ������

	int size = 0; //������ �������
	char* arr = new char[size];// ������ ������
	int j = 0;//������� ��� ������� ������
	
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '(') 
		{
			countOpen++;
			count++;

			arr[j] = '(';
			j++;
		}
		else if (s[i] == ')')
		{
			if (count == 0)
			{
				return false;
			}
			countClose++;
			count++;

			arr[j] = ')';
			j++;
		}
		size = j;
	}
	
	if (countOpen == countClose)
	{
		if (arr[size - 1] == '(')
		{
			return false;
		}
		else
		{
			return true;
		}	
	}
	else
	{
		return false;
	}
}
int main()
{
	cout << "enter expression" << endl;

	string s ;

	cin >> s;


	if (CheckMethod(s) == 0)
	{
		cout << "incorrect" << endl;
	}
	else
	{
		cout << "correct" << endl;
	}

	return 0;
}