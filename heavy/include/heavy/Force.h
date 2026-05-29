#ifndef HEAVY_FORCE_H
#define HEAVY_FORCE_H

#include "Vector3.h"

namespace heavy {

class Force {
public:
    Vector3 gravity;
    Vector3 lift;
    Vector3 thrust;
    
    Force();
    
    Vector3 calculateNetForce() const;
    
    void setGravity(const Vector3& value);
    void setGravity(float x, float y, float z);
    
    void setLift(const Vector3& value);
    void setLift(float x, float y, float z);
    
    void setThrust(const Vector3& value);
    void setThrust(float x, float y, float z);
    
    void addThrustForward(float magnitude);
    void addThrustBackward(float magnitude);
    void addThrustLeft(float magnitude);
    void addThrustRight(float magnitude);
    void addThrustUp(float magnitude);
    void addThrustDown(float magnitude);
    
    void reset();
};

}

#endif