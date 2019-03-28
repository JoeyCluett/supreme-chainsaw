#include <iostream>
#include <math.h>

using namespace std;

int main(void) {

    double miles;
    cin >> miles;

    auto i = static_cast<int>(round(miles*1000.0*5280.0/4854.0));

    cout << i << endl;

    return 0;
}