#include<iostream>
using namespace std ;
int main ()
{
    int a ,b ;

    cout << " nhap a : ";
    cin >> a; 

    cout << " nhap b : ";
    cin >> b; 

    cout <<"\n ban dau: " << a <<"  " << b ;
    // swap khong dung bien tam

    a = a + b;
    b = a - b ;
    a = a - b ;

    cout << "\nsau khi swap : "<< a << "  " << b ;
    return 0 ;
}