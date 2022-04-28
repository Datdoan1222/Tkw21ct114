#include <iostream>
#include <cstring>
using namespace std;
void xoakhoangcach(char s[], int vt = 1)
{
    for (int i = vt; i < strlen(s); i++)
    {
        s[i] = s[i + 1];
    }
}
void cau07c_char()
{
    char s[] = "Khoa        CNTT   2022  !";
    for (int i = 0; i < strlen(s); i++)
    {
        if (isspace(s[i]) && isspace(s[i + 1]))
        {
            xoakhoangcach(s, i);
            i--;
        }
    }
    cout << "\n Xoa Khong Trang Du Trong Chuoi: " << s << endl;
}
int main()
{
    cau07c_char();
    system("pause");
    return 0;
}