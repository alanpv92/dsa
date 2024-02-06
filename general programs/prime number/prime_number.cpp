#include <iostream>
#include <math.h>
using namespace std;

/*

->prime number concept
    -> number that can only be divided by itselef and 1
    -> eg - 2,3,5 ....
    ->Special Cases:
       -> If the number is less than 2, it is not a prime number.
       -> If the number is exactly 2, it is a prime number.

.

-> logic
    ->Check Divisibility:
      -> For numbers greater than 2, check divisibility up to the square root of the number.
         If the number is divisible by any integer between 2 and the square root (inclusive), it is not a prime number.
-> Optimization:
    -> You only need to check divisibility by prime numbers up to the square root, as any non-prime divisor would have a corresponding prime factor that has already been checked
*/

bool isPrime(int n)
{
    // reason to start with 2 is beacuse 1 will be already divisible
    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % 2 == 0)
        {
            return false;
        }
    }
    return true;
}


int main()
{
    int n = 0;
    cout << "enter the number:" << endl;
    cin >> n;
    isPrime(n) ? cout << "number is prime" : cout << "number is not prime";
}