#include <iostream>
using namespace std;
int main ()
{
    int n; 
    cout << " n = ";

    do 
    {
        cin >> n ;
        if( n <= 0 )
        {
            cout << " nhap so lon hon 0 !"; 
        }
    }while( n<= 0  );
    
    int gt = 1 ;
    for (size_t i = 1; i <= n ; i++)
    {
        gt *= i ; 
    }
    cout << n  << "! = "<< gt ;
    return 0 ;
}