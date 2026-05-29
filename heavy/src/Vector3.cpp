#include "heavy/Vector3.h"
#include <cmath>

namespace heavy {

Vector3::Vector3() : x(0), y(0), z(0) {}

Vector3::Vector3(float x, float y, float z) : x(x), y(y), z(z) {}

Vector3 Vector3::operator-() const {
    return Vector3(-x, -y, -z);
}

Vector3 Vector3::operator+(const Vector3& other) const {
    return Vector3(x + other.x, y + other.y, z + other.z);
}

Vector3 Vector3::operator-(const Vector3& other) const {
    return Vector3(x - other.x, y - other.y, z - other.z);
}

Vector3 Vector3::operator*(float scalar) const {
    return Vector3(x * scalar, y * scalar, z * scalar);
}

Vector3 Vector3::operator/(float scalar) const {
    return Vector3(x / scalar, y / scalar, z / scalar);
}

Vector3& Vector3::operator+=(const Vector3& other) {
    x += other.x;
    y += other.y;
    z += other.z;
    return *this;
}

Vector3& Vector3::operator-=(const Vector3& other) {
    x -= other.x;
    y -= other.y;
    z -= other.z;
    return *this;
}

Vector3& Vector3::operator*=(float scalar) {
    x *= scalar;
    y *= scalar;
    z *= scalar;
    return *this;
}

Vector3& Vector3::operator/=(float scalar) {
    x /= scalar;
    y /= scalar;
    z /= scalar;
    return *this;
}

float Vector3::dot(const Vector3& other) const {
    return x * other.x + y * other.y + z * other.z;
}

Vector3 Vector3::cross(const Vector3& other) const {
    return Vector3(
        y * other.z - z * other.y,
        z * other.x - x * other.z,
        x * other.y - y * other.x
    );
}

float Vector3::magnitude() const {
    return std::sqrt(x * x + y * y + z * z);
}

float Vector3::magnitudeSquared() const {
    return x * x + y * y + z * z;
}

Vector3 Vector3::normalized() const {
    float mag = magnitude();
    if (mag > 0) {
        return *this / mag;
    }
    return Vector3(0, 0, 0);
}

void Vector3::normalize() {
    float mag = magnitude();
    if (mag > 0) {
        *this /= mag;
    }
}

Vector3 Vector3::zero() { return Vector3(0, 0, 0); }
Vector3 Vector3::up() { return Vector3(0, 1, 0); }
Vector3 Vector3::down() { return Vector3(0, -1, 0); }
Vector3 Vector3::right() { return Vector3(1, 0, 0); }
Vector3 Vector3::left() { return Vector3(-1, 0, 0); }
Vector3 Vector3::forward() { return Vector3(0, 0, 1); }
Vector3 Vector3::backward() { return Vector3(0, 0, -1); }

}