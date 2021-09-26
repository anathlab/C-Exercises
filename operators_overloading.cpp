#include <iostream>
#include <ostream>
#include <vector>
std::ostream & operator <<( std::ostream & s, const Vector & v )
{
    return s << '<' << v.x << ',' << v.y << '>';
}
