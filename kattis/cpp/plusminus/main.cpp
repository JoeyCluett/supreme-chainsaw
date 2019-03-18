#include <iostream>
#include <vector>
#include <utility>

using namespace std;

char* field = NULL;
const char positive = '+', negative = '-';

void print_field(int h, int w) {
    for(int y = 0; y < h; y++) {
        for(int x = 0; x < w; x++)
            cout << field[y*w + x];
        cout << endl;
    }
    cout << endl;
}

// returns true if field is in a valid state
bool iterate_through_field(char* f, int h, int w) {
    for(int y = 0; y < (h-1); y++) {
        for(int x = 0; x < (w-1); x++) {

            const vector<pair<int,int>> lut_opts = {{0, 0}, {0, 1}, {1, 1}, {1, 0}};
            int num_p = 0, num_n = 0;

            for(auto& p : lut_opts) {
                if(f[w*(y+p.second) + (x+p.first)] == '+')
                    num_p++;
                else if(f[w*(y+p.second) + (x+p.first)] == '-')
                    num_n++;
            }

            if(num_p == 2) {
                // the other 2 have to be negative
                for(auto& p : lut_opts) {
                    if(f[w*(y+p.second) + (x+p.first)] != '+')
                        f[w*(y+p.second) + (x+p.first)] = '-';
                }
            }
            else if(num_n == 2) {
                // the other 2 have to be positive
                for(auto& p : lut_opts) {
                    if(f[w*(y+p.second) + (x+p.first)] != '-')
                        f[w*(y+p.second) + (x+p.first)] = '+';
                }
            }
            else if(num_n >= 3 || num_p >= 3) {
                return false;
            }
        }
    }

    return true;

}

int final_solution_number(char* f, int h, int w) {
    int num_zeros = 0;
    for(int i = 0; i < (h*w); i++) {
        if(f[i] == '0')
            num_zeros++;
    }
    return num_zeros/2;
}

int main(int argc, char* argv[]) {

    int height, width, measurements;
    cin >> height >> width >> measurements;

    field = new char[height*width];
    for(int i = 0; i < height*width; i++)
        field[i] = '0'; // start with a completely neutral (unknown) field

    //print_field(height, width);

    std::string sign;
    int x, y;
    for(int i = 0; i < measurements; i++) {
        cin >> sign >> y >> x;
        field[width*(y-1)+(x-1)] = sign[0];
    }

    //print_field(height, width);

    for(int i = 0; i < (height*width); i++) {
        //print_field(height, width);
        if(!iterate_through_field(field, height, width)) {
            cout << "0\n";
            return 1;
        }
    }

    cout << final_solution_number(field, height, width) << endl;

    return 0;
}

/*

0000
+-+-
+-+-
0000

+-+-
+-+-
+-+-
+-+-

-+-+
+-+-
+-+-
+-+-

-+-+
+-+-
+-+-
-+-+

+-+-
+-+-
+-+-
-+-+

*/

