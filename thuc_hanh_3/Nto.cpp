#include<iostream>
#include<cmath>
#include<stdbool.h>
using namespace std ;
bool Nto( int n)
{
    if( n < 2 )
    {
        return false ;
    }
    for (size_t i = 2 ; i <=  sqrt(n) ; i++)
    {
        if( n % i == 0)
        {
            return false ; 
        }
    }
    return true ;
}

int main ()
{
    int a ,b ;
    cout << " nhap a, b : ";
    cin >> a >> b ;
    cout << "So nguyen to [a,b]: \n" ;
    if(a> 0 && b >0  )
    {
        for (size_t i = a; i <= b ; i++)
        {
            if( Nto(i))
            {
                cout << i << "  ";
            }
        }
    }else
    {
        cout << " nhap a , b la so duong ";
    }

    return 0;
}