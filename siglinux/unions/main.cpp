#include <iostream>

using namespace std;

void print_binary_format(int i32) {
    for(int i = 31; i >= 0; i--)
        cout << (((i32>>i) & 0x01) ? '1':'0');
    cout << endl;
}

void print_binary_format(float f32) {
    
    union {
        int i32;
        float f_32;
    };

    f_32 = f32;
    for(int i = 31; i >= 0; i--)
        cout << (((i32>>i) & 0x01) ? '1':'0');
    cout << endl;
}

int main() {

    

    return 0;
}
