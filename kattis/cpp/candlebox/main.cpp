#include <iostream>

using namespace std;

int total_candles_for_age(int age) {
    return ((age*age + age) / 2);
}

int total_candles_for_2_ages(int a, int b) {
    return ((a*a + a + b*b + b) / 2);
}

int main(int argc, char* argv[]) {

    int delta_age, rita, theo;
    cin >> delta_age >> rita >> theo;

    int total_candles = rita + theo;
    total_candles += 6; // from rita 1-3
    total_candles += 3; // from theo 1-2

    for(int i = 1; i < total_candles/2; i++) {
        int sum = total_candles_for_2_ages(i, i+delta_age);
        if(sum == total_candles) {
            //cout << "Equal: " << sum << endl;
            int rita_age = i+delta_age;
            int theo_age = i;

            int rita_needs = total_candles_for_age(rita_age) - 6;
            int delta_rita = rita-rita_needs;
            //cout << "Needs to give away " << delta_rita << endl;
            cout << delta_rita << endl;
        }
    }

    return 0;
}