#include<iostream>
#include<map>
int
main(){std::map<char,int>d{{'A',11},{'K',4},{'Q',3},{'J',20},{'T',10},{'9',14},{'8',0},{'7',0}},n{{'A',11},{'K',4},{'Q',3},{'J',2},{'T',10},{'9',0},{'8',0},{'7',0}};int
h,t,i;char
s;std::string
u;std::cin>>h>>u;s=u[0];for(;i++<h*4;){std::cin>>u;t+=(u[1]==s)?d[u[0]]:n[u[0]];}std::cout<<t<<'\n';}