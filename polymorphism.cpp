#include <iostream>

class Base {
    public:
    virtual ~Base() {}
    virtual void showReal() {
        std::cout<<"Base";}
    void show() {std::cout<<"Base";}
    virtual int getDefault (int a=7) {
        return a+2;}
    };

class Derived: public Base{
    public:
    void showReal() override {
        std::cout<<"Derived"; }
        void show() {std::cout<<"Derived";}
        virtual int getDefault (int a=5){
            return +6;}
};

int main() {
    Derived regObj;
    regObj.show();
    regObj.showReal();
    Base *polyObj = new Derived;
    polyObj->show();
    polyObj->showReal();
    std::cout<<polyObj->getDefault();
    delete polyObj;
    return 0;
}