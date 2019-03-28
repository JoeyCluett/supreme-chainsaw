#include <iostream>
#include <string>
int
main(){int
X,Y,N,i=1;std::cin>>X>>Y>>N;for(;i<=N;i++)std::cout<<(i%X?(i%Y?std::to_string(i):"Buzz"):(i%Y?"Fizz":"FizzBuzz"))<<"\n";}