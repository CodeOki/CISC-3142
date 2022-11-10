/* 
i.
Write the definition of the constructor 1 so that the private member variables are initialized to 0.
ii.
Write the definition of the constructor 2 so that the private member variable x is initialized
according to the value of the parameter, and the private member variable y is initialized to 0.
iii.
Write the definition of the constructors 3 and 4 so that the private member variables are initialized
according to the values of the parameters.
*/

#include <iostream>

class Sample {
private:
  int x;
  double y;
public :
  Sample(); //Constructor 1
  Sample(int); //Constructor 2
  Sample(int, int); //Constructor 3
  Sample(int, double); //Constructor 4

// For part i.
Sample::Sample()
{
  x = 0;
  y = 0;
}

// For part ii.
Sample::Sample(int a)
{
  x = a;
  y = 0;
}

// For part iii.
Sample::Sample(int a, int b)
{
  x = a;
  y = b;
}

Sample::Sample(int a, double b)
{
  x = a;
  y = b;
}