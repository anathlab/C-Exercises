#include <iostream>
#include <vector>

int main () {

std::vector <int> myVector = {1,8,3,12,8};
//std::sort(myVector.begin(), myVector.end(), std::greater<int>());
std::sort(myVector.begin(), myVector.end(), std::less<int>());

for (auto& a: myVector) {
    std::cout << a << " ";

}
    return 0;
}