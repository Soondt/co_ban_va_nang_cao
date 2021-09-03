#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n , kt = 1; 
    cout << " Nhap n : ";
    cin  >> n ;
    cout << "so nguyen to tu 1 den " << n << " la:  ";
    // xet chay tu 1 den N va xem nhu i la 1 so nt
    for (size_t i = 2; i <= n; i++)
    {
        for (size_t j = 2; j <= i-1; j++)
        {
            if( i % j == 0)
            {
                kt = 0 ;
            }
        }

        if(kt == 1)
        {
            cout << i << " "; 
        }

        kt = 1;
    }
    return 0;
}