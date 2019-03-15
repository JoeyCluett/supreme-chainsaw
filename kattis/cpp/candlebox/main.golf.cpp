#include<iostream>
int
t(int
a,int
b){return(a*a+a+b*b+b)/2;}int
main(){int
d,r,h,x,i,s,y;std::cin>>d>>r>>h;x=r+h+9;for(i=1;i<x/2;i++){if(t(i,i+d)==x)std::cout<<r-(t(i+d,0)-6)<<'\n';}}