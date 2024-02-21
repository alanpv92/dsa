#include <iostream>
using namespace std;

/*
-> login
   -> start from second elemnt making that frist element as sorted subset
   -> assign key=a[i]
   -> assign hole=i
   -> continue till hole>0 and a[hole]>key
       -> a[hole]=a[hole-1]
       ->hole--
   -> a[hole]=key

*/

void readArrray(int array[], int n)
{
    cout << "enter array elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
}

void insertionSort(int array[], int n)
{

    for (int i = 1; i < n; i++)
    {
        int key = array[i];
        int hole = i;
        while (hole > 0 && array[hole - 1] > key)
        {
            array[hole] = array[hole - 1];
            hole--;
        }
        array[hole] = key;
    }
}

int main()
{
    int n;
    int key;
    cout << "enter the size of array:" << endl;
    cin >> n;
    int array[n];
    readArrray(array, n);
    insertionSort(array, n);
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}