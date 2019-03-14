#include<iostream>
#include<cmath>
int
main(){double a[4],r;for(int
i=0;i<4;i++)std::cin>>a[i];r=(a[0]+a[1]+a[2]+a[3])/2.0;printf("%.7f\n",std::sqrt((r-a[0])*(r-a[1])*(r-a[2])*(r-a[3])));}