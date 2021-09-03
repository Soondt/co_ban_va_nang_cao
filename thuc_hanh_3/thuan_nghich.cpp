#include<iostream>
using namespace std ;
void thuan_nghich(int n)
{
    int dem = 0;
    int m = n ;
    // gan m  = n de luc so sanh thi gia tri n khong bi thay doi
    while( m > 0 )
    {
        dem = dem * 10 + m % 10 ;
        m /= 10 ; 
    }
    if ( dem == n )
    {
        cout << " n la so thuan nghich";
    }else
    {
        cout << " n khong phai so thuan nghich";
    }
}
void chan_le(int n)
{
    int temp = 0 , deem = 0;
    for (size_t i = 0; i < n ; i++)
    {
        if( i % 2 == 0)
        {
            temp ++ ;
        }else
        {
            deem ++ ;
        }
    }
    cout << "\nso chan la : "<< temp ;
    cout << " \nso le : " << deem ;
}
int main()
{
    int n ;
    cout << "nhap n: ";
    cin >> n ;
    thuan_nghich(n);
    chan_le(n);
    return 0 ;
}