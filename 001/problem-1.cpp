/* Problem: 
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.
*/

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> findSumMultiple(vector<int> multiples, int highestNum,
                            int multiple) {
  vector<int>::iterator it;
  for (int i = 0; i < highestNum; i += multiple) {
    it = find(multiples.begin(), multiples.end(), i);
    if (it != multiples.end()) {
      
    } else {
      multiples.push_back(i);
    }
  }
  return multiples;
}

int main() {
  int highestNum = 1000;
  vector<int> multiples = {};
  int totalSum = 0;

  multiples = findSumMultiple(multiples, highestNum, 3);
  multiples = findSumMultiple(multiples, highestNum, 5);

  for (int i = 0; i < multiples.size(); i++) {
    totalSum += multiples[i];
    cout << multiples[i] << "\n";
  }

  cout << totalSum;
  return 0;
}
