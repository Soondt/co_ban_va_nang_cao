#include<iostream>
#include<stdbool.h>
using namespace std ;
// kiem tra xem mag co doi xung hay khong
void nhap(int *arr ,int n)
{
    for (size_t i = 0; i < n ; i++)
    {
        cout << " phan tu thu a["<<i<<"] la : ";
        cin >> arr[i];
    }
void hienthi(int *arr, int n)
{
    for (size_t i = 0; i < n ; i++)
    {
        cout << "   " << arr[i];
    }
}
bool check(int *arr,int n)
{
    for (size_t i = 0; i < n/2 ; i++)
    {
        if(arr[i] != arr[n-1-i])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cout << "Nhap n = ";
    cin >> n;
    int arr[n];
    nhap(arr,n);
    hienthi(arr,n);
    if(check(arr,n))
    {
        cout << "\ndoi xung";
    }else
    {
        cout<<"\nkhong doi xung";
    }
    return 0 ;
}
