#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char* argv[]) {

    const int pieces_needed[6] = {1, 1, 2, 2, 2, 8};
    int input_pieces[6] = {0, 0, 0, 0, 0, 0};

    // store all of the input pieces
    for(int i = 0; i < 6; i++)
        cin >> input_pieces[i];

    for(int i = 0; i < 6; i++)
        cout << pieces_needed[i]-input_pieces[i] << ' ';
    cout << endl;

    return 0;
}