#include "add.h"
#include <iostream>
using namespace std;

int add(int a, int b) {
    int result = a + b;
    cout << "add(" << a << ", " << b << ") = " << result << endl;
    return result;
}
