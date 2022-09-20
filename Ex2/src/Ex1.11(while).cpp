#include <iostream>

using namespace std;

int main() {
    int start = 0, stop = 0;

    cout << "Enter two integers, specifying a range: ";
    cin >> start >> stop;

    // checks for exception
    if (start > stop) {
        cout << "Error: starting number must be smaller than ending number." << endl;
        return -1;
    }

    while (start <= stop) {
        cout << start << endl;
        start++;
    }

    return 0;
}