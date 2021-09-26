#include <iostream>

int main (){
int number(2);
int x{};
bool isMine = number;
auto x1 = 27;
auto x2(27);
auto x3 = {27};
auto x4{27};
std::cout<<number;
std::cout<<isMine;
std::cout<<x;
std::cout<<x1;
std::cout<<x2;
    return 0;
}