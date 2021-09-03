#include<iostream>
using namespace std ;
int main()
{
    int n,m=0;
    cout << "nhap n : " ;
    do 
    {
        cin >> n;
        if( n<= 0 )
        {
            cout <<" \nnhap lai N : ";
        }
    }while( n <= 0 );

    for(int i = 1 ;i <= n ; i++)
    {
        if(n % i == 0)
        {
            cout <<" " << i;
            m++;
        }
        
    }
    cout <<"\nso uoc la: "<< m ;
}