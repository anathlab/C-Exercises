#include <iostream>
using namespace std;

void fun()
{
  static int i = 10;
  i++;
  cout << i;
}

int main()
{
  fun();
  fun();
  fun();
  return 0;
}