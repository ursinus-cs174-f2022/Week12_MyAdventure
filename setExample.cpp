#include <iostream>
#include <iterator>
#include <set>

using namespace std;

int main() {
    set<int> myset;
    for (int i = 0; i < 10; i++) {
        myset.insert(i*i);
    }
    myset.erase(64);
    myset.insert(2);
    myset.insert(174);
    set<int>::iterator it;
    for (it = myset.begin(); it != myset.end(); it++) {
        cout << *it << " ";
    }
    cout << "\n";
    return 0;
}