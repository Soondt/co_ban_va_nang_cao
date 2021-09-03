#include<iostream>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>
using namespace std ;
// nhap n va in ra mang ngau nhien n phan tu khac nhau tung doi 1
bool chuaxuathien(int *arr ,int n,int x)
{
    for (size_t i = 0; i < n; i++)
    {
        if(arr[i] == x )
        {
            return false;
        }
    }
    return true;
}
void nhap(int *arr,int &n)
{
    if( n<= 0)
    {
        cout << "nhap lai n> 0";
    }else
    {
        cout << " nhap n = ";
        cin >> n ; 
    }

    int i = 0;
    srand(time(0));
    while( i < n)
    {
        int x = srand();
        if(chuaxuathien(arr,i,x))
        {
            arr[i++] = x;
        }
    }
}
void xuat(int *arr,int n)
{
    for (size_t i = 0; i< n; i++)
    {
        cout <<"   " << arr[i];
    }
    
}
int main()
{
    int n;
    int arr[100];
    nhap(arr,n);
    xuat(arr,n);
    return 0 ; 
}

