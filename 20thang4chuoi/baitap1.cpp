#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main()
{
	char s[100];
	cout<<"Nhap chuoi: "; 
	cin.getline(s,100);
	for(int i=0; i<strlen(s);i++)
	{
		if (s[i]>='A' && s[i]<='z')
		strlwr(s);
	}
	cout<<"Chuoi da doi la: "<<s<<endl;
	return 0;
}