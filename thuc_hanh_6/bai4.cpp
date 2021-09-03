#include<iostream>
using namespace std ;
// so lonw thu 2 min = max 
template<class T > T minV(T *arr ,size_t n)
{
    T min = arr[0];
    for (size_t i = 1; i < n; i++)
    {
        if(arr[i] > min)
        {
            min = arr[i];
        }
    }
    return min;
}

template<class T > T SencondMinV(T *arr ,size_t n)
{
    T min  = minV(arr,n);
    T Sencond = min ;
    for (size_t i = 0; i < n ; i++)
    {
        if(arr[i] < Sencond)
        {
            Sencond = arr[i];
            break;
        }
    }
    
    for (size_t i = 0; i < n ; i++)
    {
        if(arr[i] != min && arr[i] > Sencond)
        {
            Sencond = arr[i];
        }
    }
    return Sencond;
}

int main ()
{
    int arrOfInt[] = { 6, 6, 6, 1, 2, 6, 9, 7, 5, 2, 3, 4, 0, -7, 11 }; // 1, 2, 6, 9, 7, 5, 2, 3, 4, 0, -7, 11
	double arrOfDouble[] = {-1, -2.5, 1.2, 5.4, 1.02, 6.98, 7.84, 9.12, 5.12, 4.35, 6.89, 12 };

    int min = minV<int>(arrOfInt , sizeof(arrOfInt) / sizeof(int));
    int Sencond = SencondMinV<int>(arrOfInt , sizeof(arrOfInt) / sizeof(int));

    if(min == Sencond)
    {
        cout << "khong co so nho thu 2"<< min ;
    }else
    {
        cout << "so be thu 2 la : " << Sencond ;
    }
    return 0;
}