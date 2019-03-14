#include <iostream>
#include <vector>
#include <string>
#include <unistd.h>
#include <array>
#include <utility>
#include <functional>

using namespace std;

int main(int argc, char* argv[]) {
    // returns pair<width, height>
    auto coords = [](void) -> pair<int, int> {
        string s;
        getline(cin, s, '\n');
        string y, x;

        const int state_y = 0;
        const int state_x = 1;
        int current_state = state_y;

        for(char c : s) {
            switch(current_state) {
                case state_y:
                    if(c == ' ') {
                        current_state = state_x;
                    }
                    else {
                        y.push_back(c);
                    }
                    break;
                case state_x:
                    x.push_back(c);
                    break;
                default:
                    break;
            }
        }

        try {
            return {stoi(x), stoi(y)};
        } catch(exception& err) {
            exit(0);
        }
    };

    // small convenience function
    function<void(vector<string>&, int, int)> fill_star = [&fill_star](vector<string>& field, int y, int x) {
        // lambdas in lambdas!? WHAT!?
        auto valid_pos = [&](int y, int x) {
            if(y < 0 || x < 0 || y >= field.size() || x >= field[0].size())
                return false;
            return true;
        };

        const vector<pair<const int, const int>> ind = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

        if(valid_pos(y, x)) {
            if(field[y][x] == '#' || field[y][x] == '\0')
                return;
            else {
                // fill in this one and try the 4 squares around it
                field[y][x] = '\0';
                for(auto& i : ind)
                    // recursively fill entire area
                    fill_star(field, y+i.second, x+i.first);
            }
        }
        else {
            return;
        }
    };

    int current_case = 1;

    while(cin) {
        auto r = coords();
        //cout << r.second << " by " << r.first << endl;

        vector<string> field;

        {
            string in;
            for(int i = 0; i < r.second; i++) {
                getline(cin, in);
                field.push_back(in);
            }
        }

        // print the field to make sure we got it right
        //for(auto& s : field)
        //    cout << s << endl << flush;
        //cout << endl;

        int num_stars = 0;

        for(int y = 0; y < r.second; y++) {
            for(int x = 0; x < r.first; x++) {
                if(field[y][x] == '-') {
                    num_stars++;
                    fill_star(field, y, x);
                }
            }
        }

        //cout << "Num stars: " << num_stars << endl;
        cout << "Case " << current_case++ << ": " << num_stars << endl;

        //usleep(2000000);
    }

    return 0;
}