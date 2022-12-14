#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main()
{
    ifstream dataFile("data.txt");
    vector<int> data;
    vector<long> products;
    string text;
    int n = 13;

    while (getline(dataFile, text))
    {
        for (int i = 0; i < text.length(); i++)
        {
            data.push_back(int(text[i]) - 48);
        }
    }

    for (int i = 0; i < data.size() - n; i++)
    {
        long long product = 1;
        for (int j = 0; j < n; j++)
        {
            product *= data[i + j];
        }
        // cout << endl;
        products.push_back(product);
    }
    sort(products.begin(), products.end());
    // for (int i = 0; i < products.size(); i++)
    // {
    //     cout << products[i];
    // }
    cout << products.back();

    return 0;
}