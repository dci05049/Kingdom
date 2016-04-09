#ifndef MATHS_H_INCLUDED
#define MATHS_H_INCLUDED

#include <cmath>

namespace Math
{

    constexpr static double PI = 3.14159265359;

    template < typename T >
    T toRads ( const T degrees )
    {
        return degrees * ( PI / 180 );
    }

    template < typename T >
    T toDeg ( const T degrees )
    {
        return degrees * ( 180 / PI );
    }

    template <typename T>
    float getRot ( T dx, T dy )
    {
        return toDeg ( atan2 ( dy,dx ) ) + 180;
    }

} //Namespace Math

#endif // MATHS_H_INCLUDED
