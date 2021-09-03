#include<iostream>
using namespace std;
// dem so lan xuat hine nhieu nhat cau 1 phan tu trong mang
void nhap(int *arr ,int &n)
{
    cout <<" nhap n = ";
    cin >> n;
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
void sol(int *arr , int *b, int n )
{
    for (size_t i = 0; i < n ; i++)
    {
        for (size_t j = i; j < n; j++)
        {
            if(arr[j] == arr[i])
            {
                b[i] ++;// tang lan xuat hien cua vi tri i
            }
        }  
    } 
}
void xuat(int *arr , int *b, int n)
{
    int max = 1;
    // so sanh
    for (size_t i = 0; i < n ; i++)
    {
        if(b[i] > max)
        {
            max = b[i];
        }
    }
    // in ra
    for (size_t i = 0; i < n ; i++)
    {
        if(b[i] == max)
        {
            cout <<"phan tu "<< arr[i] << " xuat hien "<< b[i]<< " lan\n";
        }
    }      
}
int main()
{
    int n;
    int arr[100];
    int b[100] ={0};
    nhap(arr,n);
    hienthi(arr,n);
    cout<< endl;
    sol(arr,b,n);
    xuat(arr,b,n);
    return 0 ;
}