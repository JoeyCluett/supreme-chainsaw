#include <iostream>
int
c(std::string
s){int
i=0;for(;s[i++]=='a';);return
i;}int
main(){std::string
m,d;std::cin>>m>>d;
std::cout<<((c(m)>=c(d))?"go\n":"no\n");}