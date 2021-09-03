#include<iostream>
#include<math.h>
using namespace std ;
int main()
{
    int n ; 
    int dem = 0 ;
    cout << "Nhap N :  ";
    do 
    {
        cin >> n ;
        if( n < 2 )
        {
            cout << "khong phai so nt !" ;
        }
    }while( n < 2);

    for (size_t i = 2; i < sqrt(n) ; i++)
    {
        if(  n % i ==0)
        {
            dem ++ ; 
        }
    }
    
    if(dem == 0 )
    {
        cout << n <<"\tla so nt " ;
    }else
    {
        cout << n << "\tkhong phai so nt ";
    }
    return 0 ;
}