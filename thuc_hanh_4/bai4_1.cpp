#include<iostream>
#include<cmath>
using namespace std ;
void nhap(int *arr, int n )
{
    for (size_t i = 0; i < n ; i++)
    {
        cout << "Nhap phan tu thu a["<<i<<"] la : ";
        cin >> arr[i];
    }
    
}
void hienthi(int *arr,int n)
{
    for (size_t i = 0; i < n ; i++)
    {
        cout << "\t"<<arr[i];
    }
    
}
void Max_tang(int *arr, int n)
{
    for (size_t i = 0; i < n ; i++)
    {
        for (size_t j = n -1 ; j > i ; j --)
        {
            if (arr[j] < arr[j-1])
            {
                swap(arr[j] , arr[j-1]);
            }
        }   
    } 
}
void Min_giam(int *arr,int n)
{
        for (size_t i = 0; i < n-1 ; i++)
    {
        for (size_t j = n -1 ; j > i ; j --)
        {
            if (arr[j] > arr[j-1])
            {
                swap(arr[j] , arr[j-1]);
            }
        }   
    } 
}
int main()
{
    int n;
    cout <<" Nhap N = ";
    cin >> n;
    int arr[n];
    nhap(arr,n);
    hienthi(arr,n);
    cout << endl ;
    Max_tang(arr,n);
    hienthi(arr,n);
    cout << endl ;
    Min_giam(arr,n);
    hienthi(arr,n);
    return 0 ;
}