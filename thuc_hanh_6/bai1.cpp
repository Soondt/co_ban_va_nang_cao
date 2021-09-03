#include<iostream>
using namespace std;

template <class T> T max(T a,T b,T c)
{
    T res = a;
    if( b > res )
    {
        res = b;
    }

    if(c > res)
    {
        res = c ;
    }
    return res ;
}

int main ()
{
    int maxInt ;
    float maxFloat;

    maxInt = max<int>(1,2,3);
    cout << endl ;
    maxFloat = max<float>(1.2f , 1.1f , 4);
    cout << maxInt << endl ;
    cout << maxFloat << endl ;
    return 0;
}
