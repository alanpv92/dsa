#include <iostream>
using namespace std;

/*

->logic
    ->loop through the array and swap elements if they are not in order 


*/


void readArrray(int array[], int n)
{
    cout << "enter array elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
}

void bubbleSort(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
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
    bubbleSort(array, n);
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
}