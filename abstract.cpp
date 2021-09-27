#include <iostream>

class Base
{
    public:
    virtual ~Base () {};
    virtual void show() = 0;
    void saySomething() {
        std::cout<<"hi, there";}
    };
class Derived: public Base
{
    public:
    void show() {
        std::cout<<"I'm here";}
};

int main () {
Base *obj = new Derived;

obj->show();
obj->saySomething();


    return 0;
}