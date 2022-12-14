#include <iostream>
using namespace std;

int main()
{
    long long largestProduct = 0;
    ;
    for (int i = 999; i >= 100; i--)
    {
        for (int j = 999; j >= 100; j--)
        {
            string product;
            product = to_string(i * j);
            string first = product.substr(0, product.length() / 2);
            string second = product.substr(product.length() / 2, product.length());
            string flippedSecond;
            // flips second part of string
            for (int k = second.length() - 1; k >= 0; k--)
            {
                flippedSecond += second[k];
            }
            if (first == flippedSecond && largestProduct < stoll(product))
            {
                largestProduct = stoll(product);
            }
        }
    }

    cout << largestProduct;

    return 0;
}