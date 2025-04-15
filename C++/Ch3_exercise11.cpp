#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s,s_new;

	cout << "문자열을 입력하시오: ";
	getline(cin, s);

	s[0] = toupper(s[0]);
	if (s.back() != '.')
		s.push_back('.');

	cout << "결과 문자열: " << s;

	return 0;
}