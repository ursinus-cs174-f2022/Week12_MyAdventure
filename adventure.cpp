#include <iostream>
#include <iterator>
#include <vector>
#include <map>
#include <string>

using namespace std;

int main() {
    string destination;
    while (true) {
        cout << "Where would you like to go?\n";
        cout << "Input: ";
        getline(cin, destination);
    }
    return 0;
}