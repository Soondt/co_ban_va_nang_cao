#include<iostream>
using namespace std ;
#define m 4
#define n 4 

template<class T > T minRow(T arr[m][n] , size_t row)
{
    T min = arr[row][0];
    for (size_t i = 0; i < n ; i++)
    {
        if(arr[row][i] < min )
        {
            min = arr[row][i];
        }
    }
    return min ;
}

int main ()
{
    int arr[m][n] = {
        {1,2,3,4},
        {2,4,5,7},
        {6,7,8,9},
        {3,5,7,5}
    };
    int min = minRow<int>(arr,0);
    cout << "    "  << min ;
    return 0;
}