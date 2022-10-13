#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a positive number: ";
    int number = 0;
    cin >> number;
    int num2 = number; // make a copy of number
    int result = 0;

    while (number != 0)
    {
        result = result + number % 10;
        number = number / 10;
    }

    cout << "Sum of digits of the number " << num2 << " is: " << result << endl;

return 0;

}
