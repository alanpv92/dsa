#include <iostream>
using namespace std;

/*

-> logic
    -> go through each element one by one and if it matches return true else return false
*/

void readArrray(int array[], int n)
{
    cout << "enter array elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
}

bool isElementPresent(int arr[], int size, int key)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return true;
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
    cout << "enter the key to search";
    cin >> key;

    isElementPresent(array, n, key) ? cout << "element is found" : cout << "element not found";

    return 0;
}