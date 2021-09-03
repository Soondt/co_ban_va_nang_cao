#include<iostream>
using namespace std ;
void tinh(float r)
{
    float chuvi = 0 ;
    float dientich = 0;
    chuvi =  2* 3.14 * r ;
    dientich = r * r * 3.14 ;
    cout << "chu vi la : "<< chuvi ;
    cout << "\ndien tich la : " << dientich ; 
}

void HCN(float a ,float b )
{
    float CV = 0 , DT = 0 ;
    DT = a*b;
    CV = (a+b)*2 ;
    cout << "\n chu vi hcn : "<< CV ;
    cout << "\n dien tich hcn : " << DT;
}
int main()
{
    float r,a,b ;

    cout << "Nhap  ban kinh : ";
    cin >> r ;

    cout <<" nhap chieu dai : ";
    cin >> a ;

    cout << "nhap chieu rong : ";
    cin >> b;

    if( r <= 0 || a*b <= 0)
    {
        cout << "nhap lai:  ";
    }else
    {
        tinh(r);
        HCN(a,b);
    }
    return 0 ; 
}