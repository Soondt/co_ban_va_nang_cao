#include<iostream>
using namespace std ;
int chan_le_thuan_nghich(int n )
{
    int m = n ;
    int sum = 0;
    int sochan = 0 , sole = 0 ;
    while( m > 0)
    {
        sum = sum * 10 + m % 10 ;
        m /= 10;
        
        if( sum % 2 == 0)
        {
            sochan ++;
        }else
        {
            sole ++ ;
        }
    }
    if(sum == n )
    {
        cout << " \n N la so thuan nghich !";
    }else
    {
        cout <<" \n N khong phai so thuan nghich !";
    }

    cout << "\n tong so chan la : "<< sochan;
    cout <<"\n tong so le la : " << sole;
}
int main()
{
    int n ;
    cout << "Nhap N = ";
    cin >> n;
    chan_le_thuan_nghich(n);
    return 0 ;
}