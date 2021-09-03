#include<iostream>
#include<cmath>
using namespace std ;
void nhap(int &h)
{
    cout << "Nhap H : " ;
    do 
    {
        cin >> h ;
        if ( h < 0)
        {
            cout << "Nhap H > 0 ";
        }
    }while( h < 0 );
}
void TGD( int h )
{
    for (size_t i = 1; i <= h ; i++)
    {
        for (size_t j = 1; j < 2*h; j++)
        {
            if( abs(int (h-j)) <= (i-1) )
            {
                cout << " * ";
            }else
            {
                cout << "   ";
            }
        }
        cout << endl ;
    } 
}
int main()
{
    int h;
    nhap( h ) ;
    TGD( h );
    return 0 ;
}