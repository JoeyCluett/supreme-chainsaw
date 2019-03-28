#include <iostream>
#include <map>
#include <utility>

using namespace std;

int main(void) {

    int N, Current;
    cin >> N;

    bool has_default = true;
    map<int, pair<int, int>> language_map;

    for(int i = 0; i < N; i++) {
        cin >> Current;

        auto iter = language_map.find(Current);
        if(iter != language_map.end()) {
            has_default = false;
        }
        else {

        }
    }

    return 0;
}

