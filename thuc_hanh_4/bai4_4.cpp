#include<iostream>
using namespace std ;
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
int TBC( int * arr ,int n)
{
    int sum = 0 ;
    for (size_t i = 0; i < n ; i++)
    {
        sum += arr[i];
    }
    cout << sum << endl;
    return sum/n;
}
int main ()
{
    int n ;
    cout << "nhap n = ";
    cin >> n;
    int arr[n];

    nhap(arr, n);
    hienthi(arr,n);
    cout << endl ;
    int sum = TBC(arr, n);
    
    cout << "\n trung binh cong la : "<< sum ;
    return 0;
}