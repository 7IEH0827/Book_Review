#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s,s_new;

	cout << "���ڿ��� �Է��Ͻÿ�: ";
	getline(cin, s);

	s[0] = toupper(s[0]);
	if (s.back() != '.')
		s.push_back('.');

	cout << "��� ���ڿ�: " << s;

	return 0;
}