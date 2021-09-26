#include <iostream>
#define SQUARE(x) x*x
int main(){

int x(5);
std::cout<<SQUARE(5);
#undef SQUARE(x);
    return 0;
}