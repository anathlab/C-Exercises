#include <iostream>

class Base {
    public:
    virtual ~Base() {}
    virtual void showReal() {
        std::cout<<"Base";}
    void show() {std::cout<<"Base2";}
    virtual int getDefault (int a=7) {
        return a+2;}
    };

class Derived: public Base{
    public:
    void showReal() override {
        std::cout<<"Derived"; }
        void show() {std::cout<<"Derived2";}
        virtual int getDefault (int a=5){
            return +6;}
};

int main() {
    Derived regObj;
    std::cout<<"regObj.show():\n";
    regObj.show();
    std::cout<<"\n";
    std::cout<<"regObj.showReal():\n";
    regObj.showReal();
    std::cout<<"\n";
    Base *polyObj = new Derived;
    std::cout<<"polyObj->show()\n";
    polyObj->show();
    std::cout<<"\n";
    std::cout<<"polyObj->showReal()\n";
    polyObj->showReal();
    std::cout<<"\n";
    std::cout<<"polyObj->getDefault():\n";
    std::cout<<polyObj->getDefault();
    delete polyObj;
    return 0;
}