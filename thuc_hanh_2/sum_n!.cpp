#include<iostream>
using namespace std ;
int main()
{
    int n; 
    int t = 1 ;
    float sum = 0;
    cout << "nhap n : ";
    cin >> n;
    for (int i = 1; i <= n ; i ++)
    {
        t *= i;
        sum += t;
    }
    cout << "tong la : "<< sum;
}