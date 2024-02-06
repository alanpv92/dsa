#include <iostream>
using namespace std;

void displaySeries(int limit)
{
    int t1 = 0;
    int t2 = 1;
    cout << t1 << " " << t2 << " ";
    for (int i = 0; i < limit; i++)
    {
        cout << t1 + t2 << " ";
        int temp = t2;
        t2 = t1 + t2;
        t1 = temp;
    }
}

int main()
{
    int n;
    cout << "enter your limit:" << endl;
    cin >> n;
    displaySeries(n);

    return 0;
}