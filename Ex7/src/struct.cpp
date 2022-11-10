#include <iostream>

using namespace std;

struct Pixel {
  int C, R;
};

void Display(Pixel P) {
  cout << "Col "<< P.C << " Row " << P.R << endl;
}

int main(){
  Pixel X = {40,50}, Y, Z;
  Z = X;
  X.C += 10;
  Y = Z;
  Y.C += 10;
  Y.R += 20;
  Z.C -= 15;
  Display(X);
  Display(Y);
  Display(Z);

  return 0;
}

/* Output:
Col 50 Row 50

Col 50 Row 70

Col 25 Row 50
*/