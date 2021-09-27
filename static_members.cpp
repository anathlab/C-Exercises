#include <iostream>
class MyClass {
    private:
    static int s_data;
    std::string m_dt;
    public:

explicit MyClass(std::string s) : m_dt(s) {}
static void increment() {s_data++;}
static int getNumber() {return s_data;}
std::string getName() const {return m_dt;}
};


int main(){
MyClass text("hello");
std::cout<<text.getName();
std::cout<<MyClass::getNumber();


    return 0;
}
