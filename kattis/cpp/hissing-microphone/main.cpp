#include <iostream>
#include <string>

using namespace std;

int main(void) {

    string input;
    cin >> input;

    const int state_default = 0;
    const int state_one_s   = 1;
    int current_state = state_default;

    for(auto c : input) {
        switch(current_state) {
            case state_default:
                if(c == 's') current_state = state_one_s;
                break;
            case state_one_s:
                if(c == 's') { cout << "hiss\n"; exit(0); }
                current_state = state_default;
                break;
            default:
                break;
        }
    }

    cout << "no hiss\n";

    return 0;
}
