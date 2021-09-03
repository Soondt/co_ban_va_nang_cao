#include<iostream>
using namespace std ;
int main()
{
    int n, tc=0,tl=0,sum=0;
    cout << "nhap n: ";
    cin >> n ;
    cout << "so chan la: ";
    if( n <= 0)
    {
        cout << " nhap n > 0 ! "; 
    }else
    {
    for(int i = 0 ; i <= n ; i++)
    {
        sum = ( n*( n+1 )) /2 ;

        if(i % 2 == 0)
        {
            cout <<" " << i ;
            tc += i; 
        }
    }
        cout << "\ntong chuoi so la : "<< sum ;
        cout << "\ntong so chan la: "<< tc ;
    cout << " \nso le  la: ";
    for(int i = 0 ; i <= n ; i++)
    {
        if(i % 2 != 0)
        {
            cout <<" " << i ;
            tl += i;
        }
    }
        cout << "\ntong so le: "<< tl ;
    }  
return 0;
}