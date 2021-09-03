#include<iostream>
using namespace std ;
#define m 4
#define n 4 

template<class T > T maxVCol(T arr[m][n] , size_t col)
{
    T max = arr[0][col];
    for (size_t i = 0; i < m ; i++)
    {
        // giu nguyen col va tang chi so hang 
        if(arr[i][col] > max )
        {
            max = arr[i][col];
        }
    }
    return max ;
}

int main ()
{
    int arr[m][n] = {
        {1,2,3,4},
        {2,4,5,7},
        {6,7,8,9},
        {3,5,7,5}
    };
    int max = maxVCol<int>(arr,0);
    cout << "    "  << max;
    return 0;
}