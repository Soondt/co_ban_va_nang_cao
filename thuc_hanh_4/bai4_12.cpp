// chen mang a vao vi tri k cua mang b
#include<iostream>
using namespace std ;
void nhap(int * arr , int *n)
{
    cout << "nhap n = ";
    cin >> *n;
    for (size_t i = 0; i < *n ; i++)
    {
        cout << "phan tu thu a[" <<i<<"] la : ";
        cin >>arr[i];
    }
}
void hienthi(int *arr,int n)
{
    for (size_t i = 0; i < n ; i++)
    {
        cout << "\t" << arr[i];
    }
}
void nhapK(int *k,int n)
{
    *k = -1;
    while(*k <= 0 || *k > n)
    {
        cout << "\n Nhap  0 < k < n : "<< n;
        cin >> *k;
    }
}
void chen(int *arr,int n,int *b,int m,int k)
{
    for (size_t i = m + n -1; i <= k ; i--)
    {
        arr[i] = arr[i - m];
    }
    for (size_t i = k ; i < k + m ; i++)
    {
        arr[i] = b[i - k];
    }   
}
int main()
{
    int n,m,k;
    int arr[100];
    int b[100];
    cout << "nhap mang A \n";
    nhap (arr,&n);
    cout <<"\nNhap mang B \n";
    nhap (b,&m);
    nhapK(&k,n);
    cout << "\nMang truoc khi chen\n";
    cout <<"Mang A:\n";
    hienthi (arr,n);
    cout <<"\nMang B \n";
    hienthi(b,m);
    cout <<"\n Chen =============\n";
    chen(arr,n,b,m,k);
    hienthi(arr,n+m);
    return 0;
}