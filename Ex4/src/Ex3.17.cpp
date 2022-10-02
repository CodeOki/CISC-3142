#include <iostream>
#include <vector>
#include <string>

//using namespace std;
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
    vector<string> v;
      for (string word; cin >> word; v.push_back(word));
      for (auto &str : v) for (auto &c : str) c = toupper(c);

    for (string::size_type i = 0; i != v.size(); ++i)
      {
        if (i != 0 && i % 8 == 0)
        {
          cout << endl;
        }
        cout << v[i] << " ";
      }
  
    cout << endl;

    return 0;
}