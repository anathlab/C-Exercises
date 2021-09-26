#include <iostream>

int* process ()
{
    int x = 5;
    return x;
}

int main(){


    int *p = process();
    std::cout<< *p;
}