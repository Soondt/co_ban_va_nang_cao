#include<iostream>
using namespace std;
// cong tru nhan chia ma tran cap 2
void nhapmatran(int arr[50][50],int m,int n)
{
    for (size_t i = 0; i < m ; i++)
    {
        for (size_t j = 0; j < n ; j++)
        {
            cout <<"phan tu mang arr["<<i<<"]["<<j<<"] la : ";
            cin >> arr[i][j];
        }
    }
}
void nhapMN(int *m ,int *n)
{
    *m=*n= 0;
    while(m <= 0 && n <= 0)
    {
        cout <<"\nnhap  m , n  : ";
        cin >> *m >> *n; 
    }
}
void tong(int a[50][50],int b[50][50],int c[50][50] ,int m,int n)
{
    for (size_t i = 0; i < m; i++)
    {
        for (size_t j = 0; j < n ; j++)
        {
            c[i][j] =  a[i][j] + b[i][j];
        }
    }
}
void hieu(int a[50][50],int b[50][50],int c[50][50] ,int m,int n)
{
    for (size_t i = 0; i < m; i++)
    {
        for (size_t j = 0; j < n ; j++)
        {
            c[i][j] =  a[i][j] - b[i][j];
        }
    }
}
void hienthi(int c[50][50],int m ,int n)
{
    for (size_t i = 0; i < m; i++)
    {
        for (size_t j = 0; j < n ; j++)
        {
            cout << "   "<< c[i][j];
        }
        cout << endl;
    }
}
int main ()
{
    int m,n;
    int arr[50][50];
    int a[50][50],b[50][50],c[50][50];
    nhapMN(&m,&n);
    nhapmatran(a,m,n);
    nhapmatran(b,m,n);

    tong(a,b,c,m,n);
    hienthi(c,m,n);

    hieu(a,b,c,m,n);
    hienthi(c,m,n);
    return 0;
}