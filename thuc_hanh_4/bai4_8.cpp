#include<iostream>
#include<stdbool.h>
#include<cmath>
using namespace std;
// nhap k in ra so gan no nhat
void nhap(int *arr ,int n)
{
    for (size_t i = 0; i < n ; i++)
    {
        cout << " phan tu thu a["<<i<<"] la : ";
        cin >> arr[i];
    }
}
void hienthi(int *arr, int n)
{
    for (size_t i = 0; i < n ; i++)
    {
        cout << "   " << arr[i];
    }
}
int kiemtra_giatri(int *arr , int n ,int x)
{
    int hieu = abs(arr[0] - x);
    for (size_t i = 1; i < n ; i++)
    {
        if( abs(arr[i] - x) < hieu )
        {
            hieu = arr[i] -x ;
        }
    }
    return hieu ;
}
bool check(int *b ,int n ,int v)
{
    for (size_t i = 0; i < n ; i++)
    {
        if(b[i] == v)
        {
            return false ;
        }
    }
    return true ;
}
void hienKQ(int *arr ,int n,int x,int hieu)
{
    int b[100];
    int dem = 0 ;
    for (size_t i = 0; i < n; i++)
    {
        if(abs(arr[i] - x) == hieu && check(b,dem,arr[i]))
        {
            cout << "\t" << arr[i];
            b[dem++] = arr[i];
        }
    } 
}
int main()
{
    int n,arr[100] ;
    cout << " nhap n = ";
    cin >> n ;
    nhap(arr,n);
    hienthi(arr,n);
    int x;
    cout << " \nnhap x = ";
    cin >> x ;
    int hieu = kiemtra_giatri(arr,n,x);
    hienKQ(arr,n,x,hieu);
    return 0;
}