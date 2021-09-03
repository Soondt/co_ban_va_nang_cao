#include<iostream>
using namespace std;
void nhap(int &x, int &y )
{
    // & x, &y chi den dia chi cua x va y 
    cout << "nhap gia tri x, y : ";
    do
    {
        cin >> x >> y ;
        if( x * y <= 0)
        {
            cout << " \nhap lai :  ";
        }
    } while( x * y <= 0 );
}
void HCN( int x , int y )
{
    for (size_t i = 1; i <= x ; i++)
    {
        for (size_t j = 1; j <= y ; j++)
        {
            if( i == 1 || i == x || j == 1 || j == y)
            {
                cout << " * " ;
            }else
            {
                cout << "   ";     
            }
        }
        cout << endl;
    }
}
int main ()
{
    int x, y ;
    nhap( x, y);
    HCN( x , y );
    return 0 ;
}


