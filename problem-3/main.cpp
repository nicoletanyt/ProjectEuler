#include <iostream>
using namespace std;

int main()
{
    long long int largeFactor = 0, i = 2, n = 600851475143;

    while (n != 1)
    {

        if (n % i == 0)
        {
            // if factor
            while (n % i == 0)
            {
                // if prime
                n /= i;
            }

            largeFactor = i;
        }

        i++;
    }
    printf("%lld\t", largeFactor);
}
