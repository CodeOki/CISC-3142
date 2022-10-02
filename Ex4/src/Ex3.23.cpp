#include <iostream>
#include <vector>
#include <iterator>

using std::vector;
using std::cout;
using std::iterator;

int main()
  {
    vector<int> s{0, 1, 2, 3, 4, 5, 6, 7, 8, 9,};
  
    for (auto it = s.begin(); it != s.end(); ++it)
    {
      *it *= 2;
    }
  
    for (auto i : s)
    {
      cout << i << " ";
    }
  
    return 0;
  
}