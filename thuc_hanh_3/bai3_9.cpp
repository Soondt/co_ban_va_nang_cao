#include<iostream>
#include<cmath>
#include<stdbool.h>
using namespace std ;
bool NTo(int n)
{
    if( n < 2 )
        return false;

    for (size_t i = 2; i <= sqrt(n) ; i++)
        {
            /* code */
            if( n % i ==0 )
            {
                return false;
            } 
        }  
    return true;
}
void lietke_uocNT(int n)
{
    if (n == 0)
    {
        cout << " vo so uoc la so nt";
    }
    for (size_t i = 0; i <= n ; i++)
    {
        /* code */
        if( n % i == 0 && NTo(i))
        {
            cout << " "<< i;
        }
    }
    
}
void lietke_k_uoncNT(int n)
{
    if (n == 0)
    {
        cout << " vo so uoc la so nt";
    }
    for (size_t i = 0; i <= n ; i++)
    {
        /* code */
        if( n % i == 0 && !NTo(i))
        {
            cout << " "<< i;
        }
    }
}
int main()
{
    int n ;
    char Tl;
    cout << "nhap N : ";
    cin >> n;
    if( n < 0)
    {
        cout << " nhap lai so n duong ";
    }else
    {
        do
        {
            lietke_k_uoncNT(n);
            lietke_uocNT(n);
            cout << "\n Ban co muon tiep tuc : (y/n)";
        }while(Tl == 'y' || Tl == 'Y');
    }
    return 0;
}