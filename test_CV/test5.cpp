#include<iostream>
using namespace std; 
void nhapmang(int * a ,int *n)
    {
        cout<< " nhap so pt : " ;
        cin >> *n;
        for (size_t i = 0; i < *n ; i++)
        {
            cout << "phan tu thu "<<i << " ";
            cin >> a[i];
        }  
}
void nhapK (int *k, int n)
{
    *k = -1 ;
    while( *k < 0|| *k >= n )
    {
        cout << "nhap gia tri 0 < k < "<< n;
        cin >> *k ;
    }
}
void hienthi(int *a , int n)
{
    for (size_t i = 0; i < n ; i++)
    {
        cout << a[i];
    }
    cout << endl ;
    
}
void chen(int *a, int n ,int *b ,int m,int k)
{
    for (size_t i = m + n -1; i >= k ; i--)
    {
        a[i] = a[i-m];
    }

    for (size_t i = k; i < k + m ; i++)
    {
        a[i] = b [i - k ];
    }    
}
int main ()
{
int a[100],b[100];
int m,n,k;
cout << " mang A \n";
nhapmang(a,&n);
cout << " mang B \n";
nhapmang(b,&m);
nhapK(&k,n);
cout << " mang A \n";
hienthi(a,n);
cout << " mang B \n ";
hienthi(b,m);
cout << " sau khi chen A \n ";
chen(a,n,b,m,k);
hienthi(a,m+n);
return 0 ;
}