#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int exponent = 1000;
    int sumOfDigits = 0;
    string toPower = to_string(pow(2, exponent));
    for (int i = 0; i < toPower.length() - 7; i++)
    {
        sumOfDigits += int(toPower[i]) - 48;
    }
    cout << sumOfDigits;
    return 0;
}