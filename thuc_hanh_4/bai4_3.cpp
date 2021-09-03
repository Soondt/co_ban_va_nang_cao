#include<iostream>
#include<cmath>
using namespace std ;
void nhap(int *arr, int n)
{   
    for (size_t i = 0; i < n ; i++)
    {
        /* code */
        cout << "phan thu thu a["<<i<<"] la : ";
        cin >> arr[i];
    }
    
}
void hienthi(int *arr, int n)
{
    for (size_t i = 0; i < n ; i++)
    {
        /* code */
        cout << "\t"<< arr[i];
    }
    
}
int GtriMax(int *arr, int n)
{
    int Max = arr[0];
    for (size_t i = 1; i < n ; i++)
    {
        /* code */
        if( Max < arr[i] )
        {
            Max = arr[i];
        }
    }
    return Max;
}
void Sapxeptangdan(int *arr,int n)
{
    for (size_t i = 0; i < n ; i++)
    {
        for (size_t j =  n - 1; j > i; j--)
        {
            if(arr[i] > arr[j])
            {
                swap(arr[i],arr[j]);
            }
        }
    } 
}
int Xuathien(int *arr ,int n, int x)
{
    int temp = 0 ;
    for (size_t i = 0; i < n ; i++)
    {
        if( x == arr[i])
        {
            temp ++;
        }
    }
    cout << " so la lap cua "<< x << " la : "<< temp ; 
    return temp;
}
int main ()
{
    int x ;
    int n ;

    cout << "nhap n = " ;
    cin >> n ;

    cout << "\nNhap x = ";
    cin >> x;
    int arr[n];
    if(n <= 0)
    {
        cout << "\n Nhap lai n >0"; 
    }else
    {
        nhap(arr,n);
        hienthi(arr,n);

        int max = GtriMax(arr,n);
        cout << "\n max = " << max ;
        cout << endl;
        Sapxeptangdan(arr,n);
        hienthi(arr,n);
        cout << endl;

        Xuathien(arr , n ,x);
        
    }
    return 0 ;
}
