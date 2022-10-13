/*
Prime Numbers
Write a program that finds and prints all the prime numbers between 3 and 100.
A prime number is a number such that 1 and itself are the only numbers that evenly divide it
(for example, 3, 5, 7, 11, 13, 17,...).
*/

#include <iostream>

using namespace std;

int main()
{
  int startNum, endNum;
  cout << "Enter the starting number: ";
  cin >> startNum;
  cout << "Enter the ending number: ";
  cin >> endNum;
  cout << endl;
  
  int count = 0; // Count of factors that does not include 1 and itself
  
  for(int i = startNum; i <= endNum; i++)
  {
    for(int j = 2; j < i; j++)
    {
      if(i % j == 0)
      {
        count++;
        break;
      }
    }
    if(count == 0 && i != 1)
    {
      cout << i << endl;
    }
    count = 0;
  }
  
  cout << endl;
  return 0;
}