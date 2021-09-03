#include<iostream>
using namespace std ;
int main()
{
    int n;
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
        if(i % 2 == 0)
        {
            cout <<" " << i ;
        }
    }

    cout << " \nso le  la: ";
    for(int i = 0 ; i <= n ; i++)
    {
        if(i % 2 != 0)
        {
            cout <<" " << i ;
        }
    }
    }  
return 0;
}