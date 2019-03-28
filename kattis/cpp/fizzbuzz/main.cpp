#include <iostream>

using namespace std;

int main(void) {

    int X, Y, N;
    cin >> X >> Y >> N;

    for(int i = 1; i <= N; i++) {
        bool n_div_x = !(i % X);
        bool n_div_y = !(i % Y);

        if(n_div_x && n_div_y)
            cout << "FizzBuzz\n";
        
        else if(n_div_x && !n_div_y)
            cout << "Fizz\n";

        else if(!n_div_x && n_div_y)
            cout << "Buzz\n";

        else
            cout << i << endl;
        
    }

    return 0;
}


