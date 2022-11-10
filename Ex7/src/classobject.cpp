#include <iostream>

using namespace std;

class Rectangle
{
  private:
    float length;
    float width;
  public:
    void setlength(float);
    void setwidth(float);
    float perimeter();
    float area();
    void show();
    int sameArea(Rectangle);
};

void Rectangle::setlength(float l)
{
  length = l;
}

void Rectangle::setwidth(float w)
{
  width = w;
}

float Rectangle::perimeter()
{
  return (2* length + 2 * width);
}

float Rectangle::area()
{
  return length * width;
}

void Rectangle::show()
{
  cout << "Length: " << length << "Width: " << width;
}

int Rectangle::sameArea(Rectangle other)
{
  float areaf = length * width;
  float areas = other.length * other.width;
  if(areaf == areas)
    return 1;
  else
    return 0;
}