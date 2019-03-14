#include<iostream>
#include<cmath>
int main(void){
    double a[4];
    for(int i = 0; i < 4; i++)
        std::cin >> a[(int)i];
    
    auto r = (a[0] + a[1] + a[2] + a[3]) / 2.0;
    auto final_result = std::sqrt((r-a[0]) * (r-a[1]) * (r-a[2]) * (r-a[3]));

    printf("%.7f\n", final_result);
}