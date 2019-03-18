#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {

    int n;
    cin >> n;

    int subzero = 0;

    for(int i = 0; i < n; i++) {
        int current_tmp;
        cin >> current_tmp;
        if(current_tmp < 0)
            subzero++;
    }

    cout << subzero << endl;

    return 0;
}