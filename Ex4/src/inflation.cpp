#include <iostream>
#include <cmath>
#include <vector>

//using namespace std;
using std::cout;
using std::cin;

int main() 
{
  int cost;
  int num_year;
  double inf;
  string infstr;
  
  cout << "Enter the cost of your item, number of years, and inflation rate";
  cin >> cost >> num_year >> inf;
  
  cout << cost * pow(inf/100 + 1, num_year);
  
  return 0;
}
