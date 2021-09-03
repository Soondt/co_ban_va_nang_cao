#include<iostream>
using namespace std;
int solonnhat(int n)
{
    if(n<10)
        return n ;
    if ((n %10) > solonnhat(n/10)) 
        return n %10;
    else
        return solonnhat(n/10) ;
}
int sonhonhat(int n)
{
    if ( n < 10){
         return n ;
    }
    if(( n % 10) < sonhonhat(n/10))
    {
         return n % 10 ;
    }else
    {
         return sonhonhat(n/10);}
}
int main ()
{
    int n ;
    char Tl ;
    do
    {
        cout << " nhap n : ";
        cin >> n;
        cout << " so LN la : " << solonnhat(n);
        cout << " so NN la : " << sonhonhat(n);
        cout << "\n ban co muon tiep tuc khong (y / n) : ";
        cin >> Tl;
    } while (Tl == 'Y' || Tl =='y');
    
    return 0 ;
}