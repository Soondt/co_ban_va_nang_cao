#include<iostream>
#include<cmath>
using namespace std ;
void Sto(int n)
{
    int kt = 1;
    for (size_t i = 2; i <= n ; i++)
    {
        for (size_t j = 2; j <= i -1 ; i++)
        {
            if( i % j == 0)
            {
                kt = 0;
            }
        }
        if(kt == 1)
        {
            cout<<  " " << i; 
        }
        kt =1 ;
    }
    
}
int main ()
{
    int n ;
    cout << "\n nhap n :  ";
    cin >> n;
    Sto(n);
    return 0 ;
}