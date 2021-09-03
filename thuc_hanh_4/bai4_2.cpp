#include<iostream>
#include<cmath>
using namespace std ;
void nhap(int *arr ,int n)
{
    for (size_t i = 0; i < n ; i++)
    {
        cout << "Nhap phan tu thu a[" << i << "] la :  ";
        cin >> arr[i] ;
    } 
}
void hienthi(int *arr, int n)
{
    for (size_t i = 0; i < n  ; i++)
    {
        cout << "\t"<< arr[i] ;
    }
}
int Max(int * arr , int n)
{
    int max = arr[0];
    for (size_t i = 1; i < n; i++)
    {
        if(max < arr[i] )
        {
            max = arr[i];
        }  
    }
    return max;
}
int Min(int *arr ,int n)
{
        int min = arr[0];
    for (size_t i = 1; i < n; i++)
    {
        if(min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}
int main ()
{
    int n;
    cout <<" nhap n = ";
    cin >> n;
    int arr[n];

    if(n <= 0  )
    {
        cout << " \n Nhap lai N > 0 ";
    }else
    {
        nhap(arr,n);
        hienthi(arr,n);
        int min = Min(arr,n);
        int max = Max(arr,n);
        cout << " \nmin = "<< min << "\nmax = "<< max;
    }
    return 0;
}