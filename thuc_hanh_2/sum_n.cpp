#include<iostream>
using namespace std ;
int main()
{
    int n; 
    float sum = 0;
    cout << "nhap n : ";
    cin >> n;
    for (int i = 1; i <= n ; i ++)
    {
        sum = ( n*( n+1 )) /2 ;
    }
    cout << "tong la : "<< sum;
}