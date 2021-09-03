#include<iostream>
#include<cmath>
using namespace std ;
void lietke_n_so_nt(int n)
{
    int c = 0; // bien dem de luc liet ke den n so nt dau tien
    int m = 2; // day la gi tri dau tien so nt luon co
    while( 1)
        {
            int kt = 1;
            for (size_t i = 2 ; i <= sqrt(m) ; i++)
            {
                /* code */
                if( m % 2 == 0)
                {
                    kt = 0;
                    break ;
                }
            }
            if(kt == 1)
            {
                cout << " " << m ;
                c ++ ;
            }
            if( c >= n)
            {
                break;
            }
            m++;
        }

}
int main ( )
{
    int n ;
    cout << "Nhap n = ";
    do 
    {
        cin >> n;
        if (n < 2 )
        {
            cout << " nhap lai n > 2 : ";
        }
    }while ( n < 2);
    lietke_n_so_nt(n);
    return 0 ;
}
