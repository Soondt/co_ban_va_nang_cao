#include<iostream>
using namespace std;
int tong_pt(int n)
{
    int sum = 0 ;
    for (size_t i = 1; i <= n ; i++)
    {
        sum += i; 
    }
    cout << sum<< endl;
    
    if( n < 2)
    {
        cout << "\n nhap lai : ";  
    }else 
    {
        int i  = 2 ; 
        while( n > 1 )
        {
            if( n % i == 0)
            {
                cout << i ;
                if( n != i )
                {
                    cout << " x " ;
                }
                n = n / i ;
            }else
            {
                i++ ;
            }
        }
    }
    
    return 0 ;
}
int main ()
{
    int n ;
    cout << " nhap n : ";
    cin >> n ;
    tong_pt(n);
    return 0 ;
}