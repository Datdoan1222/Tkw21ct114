#include <iostream>

using namespace std;

void kitudacbiet(string s, int count)
{

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            count++;
            cout << "\n"
                 << s[i] << " Tai vi tri " << i;
        }
    }
    cout << "\n Co tat ca " << count << " ky tu in hoa trong chuoi.\n";
}
void xoakitu(string s)
{
    char result[100];
    int dem = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (isdigit(s[i]))
        {
            result[dem] = s[i];
            dem++;
            result[dem] = '\0';
        }
        else if (dem)
        {
            cout << result << endl;
            dem = 0;
        }
    }
}
int main()
{
    cout << "Khoa-Cong-Nghe-Thong-Tin-2022!";
    string s = "Khoa-Cong-Nghe-Thong-Tin-2022!";
    int count = 0;
    cout << "\n Ky tu in hoa la:";
    kitudacbiet(s, count);
    cout << "\n Chuoi sau xoa ki tu la:";
    xoakitu(s);
    return 0;
}