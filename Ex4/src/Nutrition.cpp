#include <iostream>
#include <cmath>
#include <vector>

//using namespace std;
using std::cout;
using std::cin;

int main() 
{
    const double sweetcan;
    const int grams_per_pound;
    sweetcan = 350 * 0.1 * 0.01; //mass of 350 grams, 1/10th of 1% sweetener
    grams_per_pound = 45400 * 0.01; //mass of 45400 grams, 1% sweetener
  
    int kill_grams, mouse_size, friend_weight;
    bool request = true;
    
    while(request) //this while loop allows user to repeat the program if requested
    {
      cout << "Enter amount in grams that kills mouse, grams of the mouse, pounds of friend's weight" << endl;
      cin >> kill_grams >> mouse_size >> friend_weight;
      
      int mouse_kill_pound = grams_per_pound * mouse_size / kill_grams;
      cout << "Friend can only drink: " << friend_weight * mouse_kill_pound << " grams!" << endl;
      
      cout << "Request to continue?" << endl;
      cin >> request;
    }
  
    return 0;
  
}