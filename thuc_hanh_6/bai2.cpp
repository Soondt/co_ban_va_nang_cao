#include<iostream>
using namespace std;

template <class T > T maxV(T *arr , size_t n)
{
    T res = arr[0] ;
    for (int i = 1; i < n ; i++)
    {
        if(arr[i] > res )
        {
            res = arr[i];
        }
    }
    return res;
}

int main()
{
    int arr[] = {1,2,3,4,5,8,7,9,0,3,4,5,6,7,1};
    cout << "vvv : " << maxV(arr , sizeof(arr)/ sizeof(int))<< endl;
    return 0;
}