#include<iostream>
using namespace std;

void cau01()
{
	int a[5][5] = {
 {22, 33, 44, 2,66} , 
 {31, 6, 22, 6, 55} , 
 {22, 37, 28, 23, 3} ,
 {11, 71, 8, 33, 14} ,
 {22, 41, 12, 28, 6}
};
int b[5*5], k=0;
cout<<" Mang vua khoi tao la: \n";
for ( int i = 0; i < 5; i++ ) {
      for ( int j = 0; j < 5; j++ ) {
         cout<< a[i][j] << "  ";
      }cout<<"\n";
   }
cout<<" Mang co duong vien la: \n"; 
for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            int x;
            if (i==0 || j==0 || i==4 || j==4)
            { 
                    cout<<a[i][j]<<"  ";
					b[k++]=  a[i][j];
            }else{cout<<"   ";}
        }cout<<"\n";
    }
cout<<" Mang co so nguyen to tren duong vien la: \n";   
for(int i=0;i<k;i++)
if(b[i]>=2)
	{
	int d=0;
                    for(int c=2;c<=b[i]/2;c++)
                        if(b[i]%c==0)
                            d++;
                        if(d==0)
                        cout<<b[i]<<"   ";
                }  
}
void cau02()
{
	cout << "Khoa-Cong-Nghe-Thong-Tin-2022!";
    string s1 = "Khoa-Cong-Nghe-Thong-Tin-2022!";
    int count = 0;
    cout << "\n Chuoi sau xoa ki tu la: \n";
    char s2[100];
    int dem = 0;
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i]!='u'&&s1[i]!='e'&&s1[i]!='o'&&s1[i]!='a'&&s1[i]!='i')
        {
        	s2[i]=s1[i];
		cout << s2[i];
            
        }
    }
}
int main()
{
	cau01(); 
	return 0;
}