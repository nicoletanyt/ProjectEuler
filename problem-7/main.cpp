/*
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
What is the 10 001st prime number?
*/

#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;

    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}

int main()
{
    vector<int> primeNumbers;
    int i = 2;

    while (primeNumbers.size() != 10001)
    {
        if (isPrime(i))
        {
            primeNumbers.push_back(i);
        }
        i++;
    }
    cout << primeNumbers.back();

    return 0;
}