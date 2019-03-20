#include <iostream>

using namespace std;

int plannina(int level) {
    int c = 2;
    for(int i = 0; i < level; i++) {
        c *= 2;
        c--;
    }
    return c*c;
}

int main(void) {

    int input;
    cin >> input;
    cout << plannina(input) << endl;

    return 0;
}

