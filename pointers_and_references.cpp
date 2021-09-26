#include <iostream>

int main() {

int i = 3;
int *ptr = &i;
std::cout<<"Address: "<<ptr<<"\n";
std::cout<<"Value: "<<*ptr<<"\n";
std::cout<<"i: "<<i<<"\n";
*ptr += 2;
std::cout<<"Value: "<<*ptr<<"\n";
std::cout<<"i: "<<i<<"\n";
int &ref = i;
ref += 1;
std::cout<<"i: "<<i<<"\n";
ref = 10;
std::cout<<"i: "<<i<<"\n";
*ptr = 14;
std::cout<<"i: "<<i<<"\n";
    return 0;
}