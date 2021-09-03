#include<iostream>
using namespace std ;
// chuyen vi ma tran 2 chieu
void nhap (int arr[50][50] ,int * n , int * m)
{
    *n=*m = 0;
    while(*m <= 0 || *n <= 0)
    {
        cout << " nhap so phan tu mang a,b :";
        cin >> *n >> *m ;
    }
    for (size_t i = 0; i < *n ; i++)
    {
        for (size_t j = 0; j < *m ; j++)
        {
            cout << "phan tu arr["<<i<<"]"<<"["<<j<<"] la : ";
            cin >> arr[i][j];
        }
    }
    
}
void hienthi(int arr[50][50] ,int n ,int m)
{
    for (size_t i = 0; i <  n ; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            cout << "   " << arr[i][j] ;
        }
        cout << endl;
    }
}
void hoanvi(int arr[50][50],int n,int m,int b[50][50])
{
    for (size_t i = 0; i < m ; i++)
    {
        for (size_t j = 0; i < n ; j++)
        {
            arr[j][i] = b[i][j];
        } 
    }
}
int main()
{
    int n,m;
    int arr[50][50],b[50][50];
    nhap(arr,&n,&m);

    cout <<"\nMang A \n";
    hienthi(arr,n,m);

    cout <<endl;
    hoanvi(arr,n,m,b);
    cout <<"Mang B \n";
    hienthi(b,m,n);
    return 0;
}