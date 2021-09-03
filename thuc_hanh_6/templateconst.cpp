#include<iostream>
using namespace std ;

template<class T > class Data 
{
private: 
    T *data;
    size_t size ;
public : 
    Data(T * ,size_t);
    void ShowData();
    void copyData(T * , size_t );
};
// ham tao co tham so de truy cap  vao public
template<class T> Data<T> :: Data( T * data , size_t size)
{
    this -> data = new T[size];
    this -> size = size;
    this -> copyData(data ,size);
}

template<class T > void Data<T> :: ShowData()
{
    for (size_t i = 0; i < size; i++)
    {
       cout << this->data[i] << "  ";
    }
    cout << endl;
}

template<class T> void Data<T> :: copyData(T *data , size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        this-> data[i] = data[i];
    } 
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    // lop<kieu>ten();
    Data<int>So(arr, sizeof(arr) / sizeof(int));
    So.ShowData();
}