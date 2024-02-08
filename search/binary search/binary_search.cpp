#include <iostream>
using namespace std;

/*

logic
   -> lets say we have n elements
   -> we will first set beg=0 and end = n-1
   -> then we will find mid as mid=beg+end/2
   ->we will see if array[mid]==key
       -> if yes return
       -> else we will see if array[mid]>key
            ->end = mid-1
            ->recalute mid and repeat
        -> else
             -> beg=mid+1
             -> recalculate and repeat

*/

void readArrray(int array[], int n)
{
    cout << "enter array elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
}

bool isElementPresent(int array[], int n, int key)
{
    int beg = 0;
    int end = n - 1;
    while (beg <= end)
    {
        int mid = (beg + end) / 2;
        if (array[mid] == key)
        {
            return true;
        }
        else if (array[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            beg=mid+1;
        }
    }
    return false;
}

int main()
{
    int n;
    int key;
    cout << "enter the size of array:" << endl;
    cin >> n;
    int array[n];
    readArrray(array, n);
    cout << "enter the key to search:" << endl;
    cin >> key;
    isElementPresent(array, n, key) ? cout << "element is found" : cout << "element not found";
    return 0;
}