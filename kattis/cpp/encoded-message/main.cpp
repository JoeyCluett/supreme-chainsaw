#include <iostream>
#include <cmath>

using namespace std;

int main(void) {
    int N;
    cin >> N;
    string s;

    for(int i = 0; i < N; i++) {
        cin >> s;
        int side_length = sqrt(s.size());

        for(int x = (side_length-1); x >= 0; x--) {
            for(int y = 0; y < side_length; y++) {
                char c = s[side_length*y + x];
                cout << c;
            }
        }

        cout << endl;

        //cout << s << endl;
    }

    return 0;
}

