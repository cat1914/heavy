#include "heavy/Force.h"

namespace heavy {

Force::Force() : gravity(0, -9.8f, 0), lift(0, 0, 0), thrust(0, 0, 0) {}

Vector3 Force::calculateNetForce() const {
    return gravity + lift + thrust;
}

void Force::setGravity(const Vector3& value) {
    gravity = value;
}

void Force::setGravity(float x, float y, float z) {
    gravity = Vector3(x, y, z);
}

void Force::setLift(const Vector3& value) {
    lift = value;
}

void Force::setLift(float x, float y, float z) {
    lift = Vector3(x, y, z);
}

void Force::setThrust(const Vector3& value) {
    thrust = value;
}

void Force::setThrust(float x, float y, float z) {
    thrust = Vector3(x, y, z);
}

void Force::addThrustForward(float magnitude) {
    thrust.z += magnitude;
}

void Force::addThrustBackward(float magnitude) {
    thrust.z -= magnitude;
}

void Force::addThrustLeft(float magnitude) {
    thrust.x -= magnitude;
}

void Force::addThrustRight(float magnitude) {
    thrust.x += magnitude;
}

void Force::addThrustUp(float magnitude) {
    thrust.y += magnitude;
}

void Force::addThrustDown(float magnitude) {
    thrust.y -= magnitude;
}

void Force::reset() {
    gravity = Vector3(0, -9.8f, 0);
    lift = Vector3(0, 0, 0);
    thrust = Vector3(0, 0, 0);
}

}