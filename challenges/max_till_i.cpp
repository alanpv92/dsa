#include <iostream>
#include <climits>
using namespace std;

void readArray(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
}

int maxTillI(int array[], int key)
{
    int min = INT_MIN;
    for (int i = 0; i < key + 1; i++)
    {
        if (min < array[i])
        {
            min = array[i];
        }
    }
    return min;
}

int subArraySum(int array[],int n){
   
    for(int i=0;i<n;i++){
        int currentSum=0;
        for(int j=i;j<n;j++){
            cout<<array[j]<<" ";
            currentSum+=array[j];
        }
        cout<<"sum is:"<<currentSum;
        cout<<endl;
    }
}

int main()
{
    int n;
    cout << "enter the limit:" << endl;
    cin >> n;
    int array[n];
    readArray(array, n);
    cout<<endl;
    subArraySum(array,n);
    return 0;
}