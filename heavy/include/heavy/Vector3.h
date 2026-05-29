#ifndef HEAVY_VECTOR3_H
#define HEAVY_VECTOR3_H

#include "Export.h"

namespace heavy {

class HEAVY_API Vector3 {
public:
    float x, y, z;

    Vector3();
    Vector3(float x, float y, float z);
    
    Vector3 operator-() const;
    Vector3 operator+(const Vector3& other) const;
    Vector3 operator-(const Vector3& other) const;
    Vector3 operator*(float scalar) const;
    Vector3 operator/(float scalar) const;
    
    Vector3& operator+=(const Vector3& other);
    Vector3& operator-=(const Vector3& other);
    Vector3& operator*=(float scalar);
    Vector3& operator/=(float scalar);
    
    float dot(const Vector3& other) const;
    Vector3 cross(const Vector3& other) const;
    
    float magnitude() const;
    float magnitudeSquared() const;
    
    Vector3 normalized() const;
    void normalize();
    
    static Vector3 zero();
    static Vector3 up();
    static Vector3 down();
    static Vector3 right();
    static Vector3 left();
    static Vector3 forward();
    static Vector3 backward();
};

}

#endif