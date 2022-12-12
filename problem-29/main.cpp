#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    vector<string> terms;
    vector<string>::iterator it;
    for (long a = 2; a <= 100; a++)
    {
        for (long b = 2; b <= 100; b++)
        {
            it = find(terms.begin(), terms.end(), to_string(pow(a, b)));
            if (it == terms.end())
            {
                terms.push_back(to_string(pow(a, b)));
            }
        }
    }
    cout << terms.size() << endl;
    return 0;
}