#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {

    string current_yell, doctors_yell;
    cin >> current_yell >> doctors_yell;

    auto count_a = [](string& s) -> int {
        int i = 0;
        for(;s[i] == 'a'; i++)
            ;
        return i;
    };

    cout << ((count_a(current_yell) >= count_a(doctors_yell)) ? "go\n" : "no\n");

    return 0;
}