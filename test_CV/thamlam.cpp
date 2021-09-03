#include<iostream>
#include<algorithm>
using namespace std;
void quickSort(int a[] , int l ,int r)
{
    int p = a[(l+r)/2];
    int i =l , j = r;
    while (i < j)
    {
        /* code */
        while (a[i] < p)
        {
            /* code */
            i++;
        }
        while (a[j] > p)
        {
            /* code */
            j--;
        }
        if(i <= j)
        {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }
    if(i < r)
    {
        quickSort(a,i,r);
    }
    if(l < r)
    {
        quickSort(a,l,j);
    }
} 
int slove(int a[], int n )
{
    int k = 1;
    quickSort(a,0,n-1);
    int c = a[n-1];
    for(int i = n-2 ; i >= 0 ; i--)
    {
        k = k +1 ;
        c = c -1;
        if(c > a[i])
        {
            c = a[i];
        }
        if(c == 0) return k;
    } 
    return n ;
}
int a[1000];
int main()
{
    int n ;
    cin >> n ;
    for(int i = 0 ; i< n ; i++)
    {
        cin >> a[i];
    }
    cout << slove(a,n);
    return 0;
}