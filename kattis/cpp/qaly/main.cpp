#include <stdio.h>

using namespace std;

int main(void) {

    int N;
    scanf("%i", &N);

    float q, y, sum = 0.0;

    for(int i = 0; i < N; i++) {
        scanf("%f %f", &q, &y);
        sum += (q*y);
    }

    printf("%.3f", sum);

    return 0;
}