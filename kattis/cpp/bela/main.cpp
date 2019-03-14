#include <iostream>
#include <map>

using namespace std;

int main(int argc,char*argv[]) {
    map<char, int> dominant_pts {
        {'A', 11}, {'K', 4}, {'Q', 3}, {'J', 20}, {'T', 10}, {'9', 14}, {'8', 0}, {'7', 0} };
    map<char, int> nondominant_pts {
        {'A', 11}, {'K', 4}, {'Q', 3}, {'J', 2}, {'T', 10}, {'9', 0}, {'8', 0}, {'7', 0} };

    int hands = 0;
    char suit_c;
    cin >> hands;

    {
        string suit;
        cin >> suit;
        suit_c = suit[0];
    }

    int total_points = 0;

    for(int i = 0; i < hands*4; i++) {
        string current_hand;
        cin >> current_hand;

        if(current_hand[1] == suit_c) {
            total_points += dominant_pts[current_hand[0]];
        }
        else {
            total_points += nondominant_pts[current_hand[0]];
        }

    }

    cout << total_points << endl;

    return 0;
}