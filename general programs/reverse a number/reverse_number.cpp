#include <iostream>
#include <math.h>
using namespace std;

/*


-> logic
    -> lets say number is 4567,since this is a decimal number i can divide by 10 and take remainders and show in reverse order
    -> while joing remainder i can multipy with  10



*/

int reverseNumber(int n)
{
    int currentPower = 0;
    if (n < 10)
    {
        return n;
    }
    int reversedNumber = 0;

    while (n > 0)
    {
        reversedNumber = reversedNumber *10+ n % 10;
        currentPower++;
        n=n/10;
    }
    return reversedNumber;
}

int main()
{   int n;
    cout<<"enter the number to reverse:"<<endl;
    cin>>n;
    cout<<"the reversed number is "<<reverseNumber(n);
    return 0;
}