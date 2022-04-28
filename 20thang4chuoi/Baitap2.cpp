#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	cout << "Nhap chuoi s: ";
	getline(cin, s);
	for (int i = 0; i < s.length(); i++)
	{
		if (isdigit(s[i]))
			cout << "ky tu so " << s[i] << " vi tri " << i << endl;
	}
	return 0;
}