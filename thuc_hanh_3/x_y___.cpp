#include<iostream>
using namespace std;
void nhap(int &x )
{
    // & x, &y chi den dia chi cua x va y 
    cout << "nhap gia tri x, y : ";
    cin >> x ;
}
void TGV(int x )
{
    int temp = 0 ;
    for (size_t i = 1; i <= x ; i++)
    {
        // j <= i de in gia tri cua *
        for (size_t j = 1; j <= i ; j++)
        {
            cout << " * ";  
        }
        cout << endl ;
        
    }  
}
int main()
{
    int x ,y ;
    nhap(x);
    TGV(x);
    return 0 ;
}
