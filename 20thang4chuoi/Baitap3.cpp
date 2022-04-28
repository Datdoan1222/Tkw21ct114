#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main()
{
	char s1[100], s2[100];
	cout<<"\n Nhap chuoi s1: "; 
	cin.getline(s1,100);
	strcpy(s2,s1); //Sao chep chuoi s1 va luu vao s2
	cout<<"\n Noi dung sau khi sao chep: "<<s2<<endl;
	strcat(s1,s2);// Noi chuoi
	cout<<"\n Noi sung sau khi noi chuoi la: "<<s1<<endl;
	return 0;
}