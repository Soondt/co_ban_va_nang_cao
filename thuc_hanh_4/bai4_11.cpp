#include<iostream>
#include<cmath>
using namespace std;
// chen k vao mang ma khong lam thay doi thu tu tang dan cua mang
void nhap(int *arr,int &n)
{
    if(n <= 0)
    {
        cout <<" nhap lai n > 0";
    }else
    {
        cout << "nhap n = ";
        cin >> n;
    }
    for (size_t i = 0; i < n -1  ; i++)
    {
        cout << "phan tu thu a["<<i<<"] la : ";
        cin >> arr[i];
    }
      
}
void hienthi(int *arr,int n)
{
    for (size_t i = 0; i < n ; i++)
    {
        cout <<"    "<< arr[i];  
    }
    
}
void sapxep(int *arr,int n)
{
    int temp ;
    for (size_t i = 0; i < n - 1; i++)
    {
        for (size_t j = n - 1 ; j  > i ; j--)
        {
            if(arr[j] < arr[j -1])
            {
                temp = arr[j] ;
                arr [j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }  
    } 
}
// chen x vao vi tri k
void chenX(int *arr,int n,int x,int k)
{
    for (size_t i = n -1; i > k ; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[k] = x;
}
int TimVitri(int *arr,int n,int x)
{
    if(x <arr[0])
    {
        return 0;
    }
    if(x > arr[n -1])
    {
        return n;
    }
    for (size_t i = 0; i < n ; i++)
    {
        if(arr[i] >= x)
        {
            return i;
        }
    } 
}
int main()
{
    int n ;
    int arr[100];
    nhap(arr,n);
    hienthi(arr,n);
    sapxep(arr,n-1);
    int x ;
    cout <<"\nX = ";
    cin >> x;
    int k  = TimVitri(arr,n - 1,x);
    chenX(arr,n,x,k);
    hienthi(arr,n);
    return 0 ;
}