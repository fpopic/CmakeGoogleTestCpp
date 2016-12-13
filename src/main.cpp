#include <iostream>
#include "mylib/MyRandom.h"

using namespace std;

int main() {
    MyRandom myRandom;
    cout << "FakeRandom: " << myRandom.getFakeRandom() << endl;
    return 0;
}