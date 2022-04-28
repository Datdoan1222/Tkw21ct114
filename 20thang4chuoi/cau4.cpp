#include <iostream>
#include <string>
#define max100
using namespace std;
void checkSymbols(string s)
{
    int dem = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (!(s[i] >= '0' && s[i] <= '9' || s[i] <= 'a' && s[i] <= 'Z' || s[i] >= 'A' && s[i <= 'Z']))
        {
            cout << "\n Vi tri thu" << i << " : " << s[i];
        }
        dem++;
    }
    cout << "\n Co" << dem << "ky tu." << endl;
}
int main()
{
    string s;
    getline(cin, s);
    checkSymbols(s);
    return 0;
}