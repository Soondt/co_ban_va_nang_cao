#include<iostream>
#include<cmath>
#include<stdbool.h>
using namespace std;
// nhap mang in ra so nto hoac so chia het cho k tu ban phim
void nhap(int *arr ,int n)
{
    for (size_t i = 0; i < n ; i++)
    {
        cout << " phan tu a["<< i << "] la : ";
        cin >> arr[i];
    }
    
}
void hienthi(int *arr , int n)
{
    for (size_t i = 0; i < n ; i++)
    {
        cout << "     " << arr[i];
    }   
}
bool Nto(int n)
{
    if(n < 2 )
    {
        return false ;
    }
    for (size_t i = 2; i < sqrt(n); i++)
    {
        if( n % i == 0)
        {
            return false;
        }
    }
    return true ;
}
double TBC_chiahet_k(int *arr ,int n,int k)
{
    int sum = 0;
    int dem = 0;
    cout << "\nnhap k = ";
    cin >> k ;
    for (size_t i = 0; i < n ; i++)
    {
        if(Nto(arr[i]) || arr[i] % k ==0 )
        {
            sum += arr[i];
            dem ++ ;
        }
    }
    cout << endl;
    cout << sum << endl;
    return 1.0f*sum/dem;
}
int main()
{
    int n ,k;
    cout << "nhap n = ";
    cin >> n ;
    int arr[n];

    nhap(arr, n);
    hienthi(arr, n);

    double TB = TBC_chiahet_k(arr,n,k);
    cout << "\ntrung binh la : " << TB;
    return 0 ;
}