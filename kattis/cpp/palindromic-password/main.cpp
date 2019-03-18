#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {

    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        string input;
        cin >> input;

        for(int j : {0, 1, 2, 2, 1, 0})
            cout << input[j];

        cout << endl;
    }

    return 0;
}
