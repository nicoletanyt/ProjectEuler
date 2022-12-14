#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n = 1000;
    for (int a = 1; a < n; a++)
    {
        for (int b = a; b < n - a; b++)
        {
            int c = n - a - b;
            if (c > 0)
            {
                if (pow(c, 2) == pow(a, 2) + pow(b, 2))
                {
                    int result = a * b * c;
                    cout << result;
                    break;
                }
            }
        }
    }

    return 0;
}