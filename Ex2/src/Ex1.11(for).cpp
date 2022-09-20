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

    for (; start <= stop; start++) {
        cout << start << endl;
    }

    return 0;
}