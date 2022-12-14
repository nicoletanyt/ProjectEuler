/*
Problem:
Find the difference between the sum of the squares of the first one hundred
natural numbers and the square of the sum.
*/
#include <cmath>
#include <iostream>
using namespace std;

int main() {
  long sumOfSquares = 0;
  long squareOfSum = 0;
  long sumOfNum = 0;
  int i = 0;
  
  while (i <= 100) {
    sumOfNum += i;
    sumOfSquares += pow(i, 2);
    i++;
  }

  squareOfSum = pow(sumOfNum, 2);
  cout <<  squareOfSum - sumOfSquares;

  return 0;
}
