#include<iostream>
using namespace std ;
int main()
{
    int n ;
    int sum = 0 ;
    cout << "nhap N : ";
    cin >> n ;
    int arr[n];
    for (size_t i = 0; i < n ; i++)
    {
        cout <<" nhap pt cua mang "<< i << " la : ";
        cin >> arr[i];
    }
    for (size_t i = 0; i < n ; i++)
    {
        if( arr[i] %3 == 0 && arr[i] % 5 != 0 )
        {
            cout << "  " << arr[i] ;
            sum += arr[i];
        }
    }
    cout << "\n tong la: " << sum ;
   return 0 ; 
}