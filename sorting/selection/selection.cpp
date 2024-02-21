#include <iostream>
#include <climits>
using namespace std;

/*

-> logic
  -> create two loops,go through elements ,in each iteration find min element and swap with last element in sorted array


*/

void readArrray(int array[], int n)
{
    cout << "enter array elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
}

// void selectionSort(int array[], int n)
// {
//     for (int i = 0; i < n-1; i++)
//     {

//         for (int j = i + 1; j < n; j++)
//         {
//             if (array[i] > array[j])
//             {
//                 int temp = array[i];
//                 array[i] = array[j];
//                 array[j] = temp;
//             }
//         }
//     }
// }

void selectionSort(int array[],int n){
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(array[minIndex]>array[j]){
                minIndex=j;
            }
        }
        if(minIndex!=i){
            int temp= array[minIndex];
            array[minIndex]=array[i];
            array[i]=temp;
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
    selectionSort(array,n);
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}