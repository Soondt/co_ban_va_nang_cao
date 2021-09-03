#include<iostream>
using namespace std;
// nhap mang kt tinh sap xep 
void nhap(int *arr,int *n)
{
    cout << "nhap n = ";
    cin >> *n;
    if(n<=0)
    {
        cout << "nhap n > 0 ";
    }else
    {
        for (size_t i = 0; i < *n; i++)
        {
            cout << "phan tu thu arr["<<i<<"] la : ";
            cin >> arr[i];
        }
    }
}
void hienthi(int *arr , int n)
{
    for (size_t i = 0; i < n ; i++)
    {
        cout << "\t" << arr[i];
    }  
}
int kiemtra(int *arr,int n ,int k)
{
    k = arr[0];
    int dem = 1;
    cout << k ;
    for (size_t i = 0; i < n ; i++)
    {
        if(k < arr[i])
        {
            k = arr[i];
            cout << "\t"<<arr[i];
            dem++;
        }
       
        if( k > arr[i])
        {
            cout <<"\nvi tri "<< dem + 1<<" chua duoc sap xep co gia tri : "<< arr[i];
        }
    } 
}
int main()
{
    int n , k;
    int  arr[100];
    nhap(arr,&n);
    hienthi(arr,n);
    cout << endl;
    kiemtra(arr,n,k);
    return 0 ;
}