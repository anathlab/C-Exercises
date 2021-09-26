#include <iostream>

void swap (int a, int b)
{

    int x = a;
    a = b;
    b = x;
}

void swap2 (int& a, int& b)
{

    int x = a;
    a = b;
    b = x;
}

void swap3 (int* a, int* b)
{

    int x = *a;
    *a = *b;
    *b = x;
}

int main () {

int x(5);
int y(6);
swap(x,y);
std::cout<<x<<" "<<y<<"\n";
swap2(x,y);
std::cout<<x<<" "<<y<<"\n";
swap3(&x,&y);
std::cout<<x<<" "<<y<<"\n";
    return 0;
}